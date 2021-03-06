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

int main()
{
    //freopen( "b.in", "r", stdin );
    //freopen( "b.out", "w", stdout );
    int t, cas = 0, a, b, c;
    cin >> t;
    while( t-- ) {
        cin >> a >> b >> c;
        int ans = 0;
        for( int i = 0; i < a; ++i )
            for( int j = 0; j < b; ++j )
                ans += (i & j) < c;
        printf( "Case #%d: %d\n", ++cas, ans );
    }
    return 0;
}