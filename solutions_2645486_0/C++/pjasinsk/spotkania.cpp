//#include <algorithm>
//#include <string>
#include <stdio.h>
//#include <set>


//using namespace std;

int main()
{
	int t=10;
	int E, R, N;
	
	int VI[10];
	scanf("%d", &t);
	long long int OUT = 0;
	for (int k=1;k<=t;++k)
	{
		OUT =0;
		scanf("%d %d %d", &E, &R, &N);
		int e= E;
		for(int i=0;i<N;++i)
		{
			scanf("%d", VI+i);
		}
		for(int i=0;i<N;++i)
		{
			int j;
			for( j =i+1; j< N;++j)
			{
				if (VI[j]>VI[i])
				{
					break;
				}
			}
				if(j< N && R* (j-i) < E)
				{
					if(E - R * (j-i) < e)
					{
						OUT += (e - (E - R * (j-i))) * VI[i];
						e = E - R * (j-i);
					}
				}
				else
				{
					OUT+=e * VI[i];
					e = 0;
				}
			e+=R;
		}	
	printf("Case #%d: %llu\n",k, OUT);
	}
	return 0;
}