#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solve(vector < vector < int > > &tree, int v, int pr = -1) {
    int a, b;
    a = b = -1;
    for (int i = 0; i < tree[v].size(); i++) {
        if (tree[v][i] != pr) {
            int next = solve(tree, tree[v][i], v);
            b = max(next, b);
            if (a < b)
                swap(a, b);
        }
    }
    if (b < 0)
        return 1;
    return a + b + 1;
}

int main() {
    freopen("B-large.in", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    size_t t;
    cin >> t;
    for (size_t q = 0; q < t; q++) {
        int n;
        cin >> n;
        vector < vector < int > > tree(n);
        for (int i = 0; i < n - 1; i++) {
            int a, b;
            cin >> a >> b;
            a--; b--;
            tree[a].push_back(b);
            tree[b].push_back(a);
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
            ans = max(ans, solve(tree, i));
        cout << "Case #" << q + 1 << ": ";
        cout << n - ans << endl;
    }
    return 0;
}
