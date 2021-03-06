// A.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	fstream fs;
	fs.open("D-small-attempt0.in", fstream::in | fstream::out | fstream::app);
	ofstream fo;
	fo.open("out.txt");
	int T;
	int K, C, S;
	fs >> T;

	for (int k=1; k <= T; k++)
	{
		fs >> K >> C >> S;
		if (K == S)
		{
			fo << "Case #" << k << ":";
			for (int it = 1; it <= K; it++)
			{
				fo << " " << it;
			}
			fo << endl;
		}
		
	}

	fs.close();
}

//int main()
//{
//    vector<long long> dream;
//	vector<int> peak;
//    long long n;
//    long long minpos = -1;
//    long long minlength;
//	int posPeak;
//
//    cin >> n;
//    minlength = n+1;
//    dream.push_back(0);
//	peak.push_back(0);
//    for (long long i = 1; i <= n; i++)
//    {
//        long long tmp;
//        cin >> tmp;
//        dream.push_back(tmp);
//        dream[i] = dream[i] + dream[i-1];
//		peak.push_back(0);
//    }
//
//	posPeak = n;
//	peak[n] = n;
//
//	for (long long it = n-1; it > 0; it--)
//	{
//		peak[it] = posPeak;
//		if ((dream[it] >= dream[it-1] && dream[it] >= dream[it+1]) || (dream[it] <= dream[it-1] && dream[it] <= dream[it+1]))
//			posPeak = it;
//
//	}
//
//	peak[0] = posPeak;
//
//    if (n == 1 && dream[1] == 0)
//    {
//        cout << 1 << " " << 1 << endl;
//        return 0;
//    }
//
//    for (long long it1 = 0; it1 < n; it1++)
//    {
//		long long first, last;
//		first = peak[it1];
//		last = peak[first];
//		while (first != last)
//		{
//			if ((dream[first] >= dream[it1] && dream[last] <= dream[it1]) ||
//				(dream[first] <= dream[it1] && dream[last] >= dream[it1]))
//				for (long long it2 = first; it2 <= min(it1 + minlength, last); it2++)
//				{
//					long long dist = dream[it2] - dream[it1];
//					if (dist == 0 && it2 - it1 < minlength)
//					{
//						minpos = it1 + 1;
//						minlength = it2 - it1;
//						first = last = n;
//						break;
//					}
//				}
//
//			first = last;
//			last = peak[first];
//		}
//
//		if (first == last && dream[first-1] == dream[last]){
//			minpos = n;
//			minlength = 1;
//		}
//    }
//
//    if (minpos != -1)
//        cout << minpos << " " << minlength << endl;
//    else 
//        cout << -1 << endl;
//    return 0;
//}


//int main()
//{
//	int N, K;
//	int edge[21][21];
//	vector<int> channel;
//	cin >> N >> K;
//
//	for (int it = 0; it < N; it++)
//	{
//		memset(edge[it], 0, sizeof(int)*N);
//		channel.push_back(0);
//	}
//
//	for (int it = 0; it < N;it++)
//	{
//		int noChannel = channel[it];
//		while (noChannel < K + 1)
//		{
//			int minChannel = K+1;
//			for (int it2 = 0; it2 < N; it2++)
//				if (channel[it2] < minChannel && it2 != it)
//					minChannel = channel[it2];
//
//			for (int it2 = 0; it2 < N; it2++)
//			{
//				if (it != it2 && channel[it2] == minChannel && edge[it][it2] == 0)
//				{
//					edge[it][it2] = edge[it2][it] = 1;
//					channel[it]++;
//					channel[it2]++;
//					noChannel++;
//					if (noChannel == K + 1)
//						break;
//				}
//			}
//		}
//	}
//
//	int minChannel = 0;
//	for (int it = 0; it < N - 1; it++)
//		for (int it2 = it + 1; it2 < N; it2++)
//			if (edge[it][it2] == 1)
//				minChannel++;
//	
//	cout << minChannel << endl;
//	for (int it = 0; it < N - 1; it++)
//		for (int it2 = it + 1; it2 < N; it2++)
//			if (edge[it][it2] == 1)
//				cout << it+1 << " " << it2+1 << endl;
//
//	return 0;
//}

//int main()
//{
//	vector<vector<char>> grave;
//	vector<vector<int>> row, col;
//	int n, m, k;
//	cin >> n >> m;
//	for (int r = 0; r < n; r++)
//	{
//		vector<char> tmp;
//		vector<int> space;
//		int flag = 0, start = 0;;
//		tmp.clear();
//		for (int c = 0; c < m; c++)
//		{
//			char cell;
//			cin >> cell;
//			if (flag == 0 && cell == '.')
//			{
//				flag = 1;
//				start = c;
//			}
//			if (flag == 1 && (cell == '+' || c == m - 1))
//			{
//				flag = 0;
//				if (c == m - 1 && cell == '.')
//					space.push_back(c - start + 1);
//				else
//					space.push_back(c - start);
//			}
//			tmp.push_back(cell);
//		}
//		row.push_back(space);
//		grave.push_back(tmp);
//	}
//
//	for (int c = 0; c < m; c++)
//	{
//		vector<int> space;
//		int flag = 0, start = 0;;
//		for (int r = 0; r < n; r++)
//		{
//			if (flag == 0 && grave[r][c] == '.')
//			{
//				flag = 1;
//				start = r;
//			}
//			if (flag == 1 && (grave[r][c] == '+' || r == n - 1))
//			{
//				flag = 0;
//				if (r == n - 1 && grave[r][c] == '.')
//					space.push_back(r - start + 1);
//				else
//					space.push_back(r - start);
//			}
//		}
//		col.push_back(space);
//	}
//	
//	k = max(m, n);
//	int *count = new int[k+1];
//	memset(count, 0, sizeof(int)*(k+1));
//
//
//	for (int it = 0; it < row.size(); it++)
//	{
//		for (int it2 = 0; it2 < row[it].size(); it2++)
//		{
//			int len = min(k, row[it][it2]);
//			for (int it3 = 1; it3 <= len; it3++)
//			{
//				if (it3 <= row[it][it2])
//				count[it3] = count[it3] + row[it][it2] - it3 + 1;
//			}
//		}
//	}
//
//	for (int it = 0; it < col.size(); it++)
//	{
//		for (int it2 = 0; it2 < col[it].size(); it2++)
//		{
//			int len = min(k, col[it][it2]);
//			for (int it3 = 2; it3 <= len; it3++)
//			{
//				if (it3 <= col[it][it2])
//				count[it3] = count[it3] + col[it][it2] - it3 + 1;
//			}
//		}
//	}
//
//	for (int it3 = 1; it3 < k; it3++)
//	{
//		cout << count[it3] << " ";
//	}
//
//	cout << count[k] << endl;
//	delete[] count;
//	return 0;
//}