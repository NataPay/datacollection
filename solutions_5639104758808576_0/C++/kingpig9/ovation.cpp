//why are you stalking me?
#include <bits/stdc++.h>

using namespace std;

#define fillchar(a, s) memset((a), (s), sizeof(a))
#define debug(...) fprintf(stderr, __VA_ARGS__)
#define all(v) (v).begin(), (v).end()
#define rep(it, v) for (auto it = (v).begin(); it != (v).end(); it++)
#define dbg(x) cerr << #x << " = " << x << endl

typedef long long ll;
typedef pair<int, int> pii;

int N;
string S;

void go (int testnum) {
	cin >> N >> S;
	int ans = 0, psum = 0;
	for (int i = 0; i <= N; i++) {
		//psum = # of friends who already don't have it. good enough
		int x = S[i] - '0';
		if (x) {
			if (psum < i) {
				//psum = # of friends so far to stand up for her
				ans = max(ans, i - psum);
			}
			psum += x;
		}
	}
	cout << "Case #" << testnum << ": " << ans << '\n';
}

int main() {
	//why are you stalking me?
	if (fopen("input.txt", "r")) {
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		go(i);
	}
}