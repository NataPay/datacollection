//#include <algorithm>
//#include <string>
#include <stdio.h>
//#include <set>



char S[1000001];

int main()
{
	int t;
	scanf("%d", &t);
	
	for (int k=1;k<=t;++k)
	{
		int y, x;
		
		scanf("%d %d", &x, &y);
		int j=0;
		if(y>0)
		{
			for(int i = 0;i< y;++i)
			{
				S[j++] = 'S';
				S[j++] = 'N';
			}
		}
		else
		{
			for(int i = 0;i< -y;++i)
			{
				S[j++] = 'N';
				S[j++] = 'S';
			}
		}
		if(x>0)
		{
			for(int i = 0;i< x;++i)
			{
				S[j++] = 'W';
				S[j++] = 'E';
			}
		}
		else
		{
			for(int i = 0;i< -x;++i)
			{
				S[j++] = 'E';
				S[j++] = 'W';
			}
		}
		S[j]=0;
		printf("Case #%d: %s\n",k, S);
	}
	return 0;
}