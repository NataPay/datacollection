#include <iostream>
#include <string>
#include <tuple>
#define repeat(i,n) for (int i = 0; (i) < (n); ++(i))
#define repeat_from(i,m,n) for (int i = (m); (i) < (n); ++(i))
typedef long long ll;
template <class T> bool setmin(T & l, T const & r) { if (not (r < l)) return false; l = r; return true; }
using namespace std;
const ll inf = 1e18+9;
tuple<ll,ll,ll> dfs(int i, string const & s, string const & t, ll a, ll b) {
    int n = s.length();
    if (i == n) {
        return make_tuple(llabs(a - b), a, b);
    } else if (a > b) {
        ll na = a * 10 + (s[i] == '?' ? 0 : s[i] - '0');
        ll nb = b * 10 + (t[i] == '?' ? 9 : t[i] - '0');
        return dfs(i+1, s, t, na, nb);
    } else if (a < b) {
        ll na = a * 10 + (s[i] == '?' ? 9 : s[i] - '0');
        ll nb = b * 10 + (t[i] == '?' ? 0 : t[i] - '0');
        return dfs(i+1, s, t, na, nb);
    } else {
        auto ans = make_tuple(inf, inf, inf);
        if (s[i] == '?' and t[i] == '?') {
            setmin(ans, dfs(i+1, s, t, a * 10 + 0, b * 10 + 0));
            setmin(ans, dfs(i+1, s, t, a * 10 + 0, b * 10 + 1));
            setmin(ans, dfs(i+1, s, t, a * 10 + 1, b * 10 + 0));
        } else if (s[i] == '?') {
            ll nb = b * 10 + (t[i] - '0');
            repeat_from (j,-1,1+1) if (isdigit(t[i] + j)) {
                ll na = a * 10 + (t[i] + j - '0');
                setmin(ans, dfs(i+1, s, t, na, nb));
            }
        } else if (t[i] == '?') {
            ll na = a * 10 + (s[i] - '0');
            repeat_from (j,-1,1+1) if (isdigit(s[i] + j)) {
                ll nb = b * 10 + (s[i] + j - '0');
                setmin(ans, dfs(i+1, s, t, na, nb));
            }
        } else {
            ll na = a * 10 + (s[i] - '0');
            ll nb = b * 10 + (t[i] - '0');
            setmin(ans, dfs(i+1, s, t, na, nb));
        }
        return ans;
    }
}
string zfill(string const & s, int n) {
    string t(n - s.length(), '0');
    return t + s;
}
void solve() {
    string s, t; cin >> s >> t;
    int n = s.length();
    ll diff, a, b; tie(diff, a, b) = dfs(0, s, t, 0, 0);
    cout << zfill(to_string(a), n) << ' ' << zfill(to_string(b), n) << endl;
}
int main() {
    int t; cin >> t;
    repeat (i,t) {
        cout << "Case #" << i+1 << ": ";
        solve();
    }
    return 0;
}
