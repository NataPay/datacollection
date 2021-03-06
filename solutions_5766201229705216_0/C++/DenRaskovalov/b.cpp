#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>

#include <vector>
#include <algorithm>
#include <set>

using namespace std;

typedef vector<int> TIntVector;
typedef vector<TIntVector> TIntVectorVector;
typedef set<int> TIntSet;

static const int MAX = 123456789;

struct TResult
{
    TResult(int cost, int size)
        : _cost(cost)
        , _size(size)
    {
        
    }

    TResult()
    {
    }

    int _cost;
    int _size;
};

typedef vector<TResult> TResultVector;

TResult GetCost(const TIntVectorVector& graph, int v, TIntSet& used)
{
    used.insert(v);
    static const TResult MaxResult(MAX, 0);
    TResultVector costs(graph[v].size(), MaxResult);
    int nv = 0;
    int size = 1;
    for (int i = 0; i < graph[v].size(); ++i)
    {
        if (used.find(graph[v][i]) == used.end())
        {
            ++nv;
            costs[i] = GetCost(graph, graph[v][i], used);
            size += costs[i]._size;
        }
    }
    if (nv == 0)
    {
        return TResult(0, 1);
    }
    else
    {
        if (nv == 1)
        {
            for (int i = 0; i < costs.size(); ++i)
            {
                if (costs[i]._cost != MAX)
                {
                    return TResult(costs[i]._size, size);
                }
            }
        }
        else
        {
            int minCost = MAX;
            for (int i = 0; i < graph[v].size(); ++i)
            {
                if (costs[i]._cost != MAX)
                {
                    for (int j = i + 1; j < graph[v].size(); ++j)
                    {
                        if (costs[j]._cost != MAX)
                        {
                            int cost = 0;
                            for (int k = 0; k < graph[v].size(); ++k)
                            {
                                if (costs[k]._cost != MAX)
                                {
                                    if (k == i || k == j)
                                    {
                                        cost += costs[k]._cost;
                                    }
                                    else
                                    {
                                        cost += costs[k]._size;
                                    }
                                }
                            }
                            if (cost < minCost)
                            {
                                minCost = cost;
                            }
                        }
                    }
                }
            }
            return TResult(minCost, size);
        }
    }
}

int main()
{
    freopen("B-small-attempt0 (1).in", "r", stdin);
    freopen("B-small-attempt0 (1).out", "w", stdout);

    int nT;
    scanf("%d", &nT);
    for (int t = 0; t < nT; ++t)
    {
        int n;
        scanf("%d", &n);

        TIntVectorVector graph(n);
        
        for (int i = 0; i < n - 1; ++i)
        {
            int a, b;
            scanf("%d%d", &a, &b);
            --a;
            --b;
            graph[a].push_back(b);
            graph[b].push_back(a);
        }

        int min = MAX;
        for (int i = 0; i < n; ++i)
        {
            TIntSet used;
            TResult cost = GetCost(graph, i, used);
            if (min > cost._cost)
            {
                min = cost._cost;
            }
        }

        printf("Case #%d: ", t + 1);
        printf("%d", min);
        printf("\n");
    }

    return 0;
}