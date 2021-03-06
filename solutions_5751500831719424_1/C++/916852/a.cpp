#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <queue>
#include <ctime>
using namespace std;

#define LL long long
#define mod 1000000007
#define eps 1e-8
#define mxn 32000

string s[105];
int cur[105], p[105];

int solve( int n ) {
    int ret = 1000000;
    for( int i = 1; i <= 100; ++i ) {
        int tmp = 0;
        for( int j = 1; j <= n; ++j ) tmp += abs(p[j] - i);
        ret = min(ret, tmp);
    }
    return ret;
}

int cal( int n ) {
    for( int i = 1; i <= n; ++i ) cur[i] = 0;
    int cnt = 0;
    while( true ) {
        bool ok = true;
        for( int i = 1; i <= n; ++i ) if( cur[i] != s[i].size() ) ok = false;
        if( ok ) return cnt;
        for( int i = 1; i <= n; ++i ) if( s[i][cur[i]] != s[1][cur[1]] ) return -1;
        for( int i = 1; i <= n; ++i ) {
            p[i] = 0;
            int j = cur[i];
            while( j < s[i].size() && s[i][j] == s[i][cur[i]] ) ++p[i], ++j;
            cur[i] = j;
        }
        cnt += solve(n);
    }
}

int main()
{
    //freopen( "a.in", "r", stdin );
    //freopen( "a.out", "w", stdout );
    int t, n, cas = 0;
    cin >> t;
    while( t-- ) {
        cin >> n;
        for( int i = 1; i <= n; ++i ) cin >> s[i];
        int ans = cal(n);
        if( ans == -1 ) printf( "Case #%d: Fegla Won\n", ++cas );
        else printf( "Case #%d: %d\n", ++cas, ans );
    }
    return 0;
}