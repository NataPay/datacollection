/*
ID: keyvank2
TASK: combo
LANG: C++
*/

#include <bits/stdc++.h>

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define FOR(i,j,k) for(int i = j; i < (int)(k); i++)
#define FORV(i, v) FOR(i, 0, ((v).size()))
#define REP(i,j,k) for(int i = j; i >= (int)(k); i--)
#define setmax(i) const int maxn = (int) i;
#define setmod(i) const int MOD = (int) i;
#define all(a) a.begin(),a.end()
#define autodef(x,v) typeof(v) x = (v)
#define autoref(x,v) typeof(v)& x = (v)
#define forit(it, c) for (autodef(it, ((c).begin())); it != ((c).end()); ++it)

//typedef complex<double> Point;
//#define X real()
//#define Y imag()

using namespace std;

//ifstream fin("");
//ofstream fout("");
//#define cin fin
//#define cout fout

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<ld,ld> pdd;
typedef pair<pii,int> ppi;
typedef pair<pll,ll> ppl;
typedef pair<int,pii> pip;
typedef pair<ll,pll> plp;
typedef pair<pii,pii> ppp;

const int INF = (int) 2e9;
const ll INFL = (ll) 9e18;
const int MAXINT = ((~0) ^ (1 << 31));
const ll MAXLL = ((~0) ^ ((ll)1 << 63));

template<class T> inline T pow2(T a) { return a*a;}
template<class T> inline bool mineq(T& a, T b){return (a > b) ? (a=b, true) : false;}
template<class T> inline bool maxeq(T& a, T b){return (a < b) ? (a=b, true) : false;}

//srand (time(NULL));

const string win = "RICHARD";
const string loos = "GABRIEL";

string solve()
{
    int x,n,m;
    cin >> x >> n >> m;

    if(n > m)
	swap(n,m);

    if(x >= 7)
	return win;
    if(x == 1)
	return loos;
    if(x == 2)
	return ( (n*m) % 2 == 0? loos : win);
    if(x == 3)
	return ( (n*m) % 3 == 0 && n >= 2 && m >= 3 ? loos : win);
    if(x == 4)
	return ( (n*m) % 4 == 0 && n >= 3 && m >= 4 ? loos : win);
    if(x == 5)
	return ( (n*m) % 5 == 0 && n >= 4 && m >= 5 ? loos : win);
    if(x == 6)
	return ( (n*m) % 6 == 0 && n >= 4 && m >= 6 ? loos : win);
    return ":|";    
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
   
    int z;
    cin >> z;
    FOR(i,1,z+1)
    {
	cout << "Case #" << i << ": " << solve() << "\n";
	cerr << "Case #" << i << ": Done\n";
    }

}
