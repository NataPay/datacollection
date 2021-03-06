#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cassert>
#include <cstdlib>
#include <ctime>

using namespace std;
typedef long long int64;
#ifdef HOME
	#define E(c) cerr<<#c
	#define Eo(x) cerr<<#x<<" = "<<(x)<<endl
	#define Ef(...) fprintf(stderr, __VA_ARGS__)
#else
	#define E(c) ((void)0)
	#define Eo(x) ((void)0)
	#define Ef(...) ((void)0)
#endif

const int SIZE = 1<<20;

int n;
int arr[SIZE];

int main() {
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int tests;
	scanf("%d", &tests);
	for (int tt = 1; tt<=tests; tt++) {
		scanf("%d", &n);
		for (int i = 0; i <= n; i++) {
			char c;
			scanf(" %c", &c);
//			Eo(c);
			arr[i] = c - '0';
//			Ef("%d -> %d\n", i, arr[i]);
		}

		int ans = 0;
		int sum = 0;
		for (int i = 0; i <= n; i++) {
			ans = max(ans, i - sum);
			sum += arr[i];
		}

		printf("Case #%d: %d\n", tt, ans);
		fflush(stdout);
	}
	return 0;
}
