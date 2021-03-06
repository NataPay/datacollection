//============================================================================
// Author      : Prateek Agarwal
// Institution : NITJ
//============================================================================

#include <bits/stdc++.h>

#define ll long long

#define TEST int t;scan(t);while(t--)
#define scan(n) scanf("%d",&n)
#define set(x,y) memset(x,y,sizeof(x))
#define loop(i,l,r,x) for (int i=l;i<=r;i+=x)
#define printl(n) printf("%d\n",n)
#define print(n) printf("%d ",n)
#define pb push_back

#define INF 1000000000
#define M 1000000007
#define MAX 500001
#define LIM 10

using namespace std;

string a[3000],b[3000];

int n;

int init(){
	int cs=1;
	TEST{
		cin>>n;
		map <string ,int > ma,mb;

		for (int i=0;i<n;i++){
			cin>>a[i]>>b[i];
			ma[a[i]]++;
			mb[b[i]]++;
		}

		int cn=0;
		for (int i=0;i<n;i++){
			if (ma[a[i]]>1 && mb[b[i]]>1){
				cn++;
				ma[a[i]]--;
				mb[b[i]]--;
			}
		}

		cout << "Case #" << cs++ << ": " ;
		cout << cn;
		cout << endl;
	}
	return 0;
}

int main(){
	//clock_t start = clock();
	init();
	//printf("%.6f\n",double(clock()-start)/CLOCKS_PER_SEC);
	return 0;
}

