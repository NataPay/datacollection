#include <algorithm>
#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <functional>
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include <stdio.h>

//#pragma comment(linker, "/STACK:16777216")

using namespace std;

void one_is_one(int C, int N)
{
	int result = 0;
	if (C % 2 == 0)
		++result, --N;
	result += 2 * N;
	cout << result << endl;
}

void all_many(int R, int C, int N)
{
	int result = 0;
	if (((R % 2) == 0) || ((C % 2) == 0))
	{
		if (N > 0)
		{
			--N; result += 2;
		}
		if (N > 0)
		{
			--N; result += 2;
		}
	}

	int three = ((R - 1) / 2) * 2 + ((C - 1) / 2) * 2;
	if ((R % 2 != 0) && (C % 2 == 0))
	{
		three = ((R - 3) / 2) + ((R - 1) / 2) + ((C - 1) / 2) * 2;
	}
	else if ((R % 2 == 0) && (C % 2 != 0))
	{
		three = ((R - 1) / 2) * 2 + ((C - 3) / 2) + ((C - 1) / 2);
	}

	result += min(N, three) * 3;
	N -= min(N, three);

	result += N * 4;
	cout << result << endl;
}

int getHapyness(const vector<vector<int> > & a, int X, int Y)
{
	int happy = 0;
	for (int x = 0; x < X; ++x)
	{
		for (int y = 1; y < Y; ++y)
		{
			if (a[x][y] && a[x][y - 1])
			{
				++happy;
			}
		}
	}
	for (int x = 1; x < X; ++x)
	{
		for (int y = 0; y < Y; ++y)
		{
			if (a[x][y] && a[x - 1][y])
			{
				++happy;
			}
		}
	}
	return happy;
}

void solve_brute(int X, int Y, int N)
{
	int cells = (X * Y);
	int maxMask = 1 << cells;
	int bestHapyness = 2000000000;

	vector<vector<int> > a(X, vector<int>(Y));
	for (int mask = 0; mask < maxMask; ++mask)
	{
		int m = mask, cnt = 0;
		for (int x = 0; x < X; ++x)
		{
			for (int y = 0; y < Y; ++y)
			{
				if (m % 2 == 1)
				{
					++cnt;
					a[x][y] = 1;
				}
				else
				{
					a[x][y] = 0;
				}
				m /= 2;
			}
		}
		if (cnt == N)
		{
			bestHapyness = min(getHapyness(a, X, Y), bestHapyness);
		}
	}
	cout << bestHapyness << endl;
}

void solve()
{
	int R, C, N; cin >> R >> C >> N;

	if (R * C <= 16)
	{
		solve_brute(R, C, N);
		return;
	}

	int cells = R * C;
	int zeros = cells - (cells / 2);
	if (zeros >= N)
	{
		cout << 0 << endl;
		return;
	}
	N -= zeros;

	if (R > C)swap(R, C);
	if (R == 1)
	{
		one_is_one(C, N);
	}
	else
	{
		all_many(R, C, N);
	}
}

int main()
{
	std::ios_base::sync_with_stdio(0);
#ifdef GRANDVIC_DEBUG
	//freopen("D:/input.txt", "rt", stdin);
#endif
	int T; cin >> T;
	for (int t = 1; t <= T; ++t)
	{
		std::cout << "Case #" << t << ": ";
		solve();
	}
	return 0;
}
