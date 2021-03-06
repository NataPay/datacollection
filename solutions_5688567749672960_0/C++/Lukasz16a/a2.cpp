#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <cassert>
#include <cstring>
#include <sstream>
#include <ext/numeric>
#include <gmpxx.h>			// -lgmpxx -lgmp
//#include <NTL/mat_lzz_p.h> 	// -lntl
using namespace std ;
using namespace __gnu_cxx ;
//using namespace NTL ;
typedef mpz_class BIGNUM ;
typedef long long LL ;
typedef pair<int,int> PII ;
typedef vector<int> VI ;
const int INF = 1e9 ;
const LL INFLL = (LL)INF * (LL)INF ;
#define REP(i,n) for(i=0;i<(n);++i)
#define ALL(c) c.begin(),c.end()
#define VAR(v,i) __typeof(i) v=(i)
#define FOREACH(i,c) for(VAR(i,(c).begin());i!=(c).end();++i)
#define CLEAR(t) memset(t,0,sizeof(t))
#define PB push_back
#define MP make_pair
#define FI first
#define SE second

template<class T1,class T2> ostream& operator<<(ostream &s, const pair<T1,T2> &x) { s<< "(" << x.FI << "," << x.SE << ")"; return s;}
template<class T>           ostream& operator<<(ostream &s, const vector<T>   &t) { FOREACH(it, t) s << *it << " " ; return s ; }
template<class T>           ostream& operator<<(ostream &s, const std::set<T> &t) { FOREACH(it, t) s << *it << " " ; return s ; }
template<class T1,class T2> ostream& operator<<(ostream &s, const map<T1, T2> &t) { FOREACH(it, t) s << *it << " " ; return s ; }

//////////////////////////////////////////////////////////////

const int MAXN=1000000 ;
int d[MAXN+1] ;
bool used[MAXN+1] ;

void bfs(const int MAXN, const int goal) {
	CLEAR(used) ;
	
	for(int i=1 ; i<=MAXN ; i++)
		d[i] = INF ;
	d[0]=0 ;
	used[0]=true ;
	queue<int> Q ;
	Q.push(0) ;
	
	while(!Q.empty()) {
		int u = Q.front() ;
		//cout << u << endl ;
		// int odl = Q.top().d ;
		Q.pop() ;
		if(u+1<=MAXN && !used[u+1]) {
			d[u+1] = d[u]+1 ;
			used[u+1] = true ;
			Q.push(u+1) ;
			if(u+1 == goal) return ;
		}
		VI t ;
		int v=u ;
		int next=0 ;
		while(v>0) {
			next = next*10 + (v%10) ;
			v/=10 ;
		}
		if(next<=MAXN && !used[next]) {
			d[next] = d[u]+1 ;
			used[next]=true ;
			Q.push(next) ;
			if(next == goal) return ;
		}
	}
}

void _main() {
	LL N ;
	cin >> N ;
	int ogr=1 ;
	while(ogr<N) ogr*=10 ;
	bfs(ogr, N) ;
	cout << d[N] << endl ;
}

int main()
{
	ios_base::sync_with_stdio(0) ;
	int C ;
	cin >> C ;
	for(int tests=1 ; tests<=C ; tests++) {
		cerr << "Case #" << tests << endl ;
		cout << "Case #" << tests << ": " ;
		_main() ;
	}
}

