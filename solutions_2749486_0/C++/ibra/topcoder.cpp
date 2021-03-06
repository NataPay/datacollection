#include <stdio.h>
#include<vector>
#include<iostream>
#include<cstring>
#include <queue>
#include<string>
using namespace std;
const double EPS = 1e-9;
typedef long long ll;
typedef unsigned long long ull; 
int nextint(){int a;scanf("%d",&a);return a;}
ll nextll(){ll a;scanf("%lld",&a);return a;}
double nextdouble(){double a;scanf("%lf",&a);return a;}
int di[] = {1, -1, 0, 0};
int dj[] = {0, 0, 1, -1};
string dir = "NSEW";

class state
{
public:
	state(int i = 0, int j = 0, int k = 0): i(i), j(j) {}
	int i, j;
};

int dp[512][512];
int dk[512][512];
int DI = 256;
int DJ = 256;

int main()
{
	memset(dp, -1, sizeof dp);
	queue<state> q;
	dp[DI][DJ] = 0;
	dk[DI][DJ] = 0;
	q.push(state(DI, DJ));
	while(!q.empty())
	{
		state top = q.front(); q.pop();
		int k = dk[top.i][top.j];
		for(int ii = 0; ii < 4; ii++)
		{
			int ni = top.i+di[ii]*(k+1);
			int nj = top.j+dj[ii]*(k+1);
			if(0 <= ni && ni < 512 && 0 <= nj && nj < 512 && k < 100 && dp[ni][nj] == -1)
			{
				dp[ni][nj] = ii;
				dk[ni][nj] = k+1;
				q.push(state(ni, nj));
			}
		}
	}

	freopen("B-small-attempt0.in", "r", stdin);
	freopen("out.txt", "w", stdout);
	int t = nextint();
	for(int test = 1; test <= t; test++)
	{
		int cj = DJ+nextint();
		int ci = DI+nextint();
		int ck = dk[ci][cj];

		string res = "";

		while(!(ci == DI && cj == DJ))
		{
			res += dir[dp[ci][cj]];
			int ni = ci-ck*di[dp[ci][cj]];
			int nj = cj-ck*dj[dp[ci][cj]];
			ci = ni;
			cj = nj;
			ck--;
		}

		reverse(res.begin(), res.end());

 
		cout << "Case #" << test << ": " << res << endl; 
	}
	


	return 0;
}