#include <fstream>
#include <string>
#include <cstdlib>
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
#include <cstdlib>
#include <ctime>
#include <queue>
#include <stdio.h>

#include <math.h>

using namespace std;

ofstream fout("OUT111.txt");
ifstream fin ("INP111.txt");

//FILE* pFile;
//int c;
//pFile = fopen("ou.txt","w");
//pFile=fopen ("beads.txt","r");



int main() {

//FILE* pFile;
//pFile = fopen("ou.txt","w");

// string na;
// if (tt == 0)
//  getline(fin,na);

// getline(fin,na);

// istringstream sin(na); 
// string v; 
// while (sin>>v) 
//   names.push_back(v); 

//fprintf(pFile, "Case #%d: ", t+1);
//fprintf(pFile,"%d\n",res);

  int TT;
  fin >> TT;

  for (int tt=0; tt<TT; tt++)
  {
     int r, n, m, k;
	 fin >> r >> n >> m >> k;
     fout << "Case #" << tt+1 << ": " << endl;
	 for (int i=0; i<r; i++)
	 {
        vector <int> pr;
		for (int j=0; j<k; j++)
		{
           int te;
		   fin >> te;
		   pr.push_back(te);
		}
		bool found = false;
		int a, b ,c;
		int ra, rb, rc;
		for (a=2; a<=m && !found; a++)
		{
           for (b=2; b<=m && !found; b++)
		   {
              for (c=2; c<=m && !found; c++)
			  {
                 map <int, int> cp;
				 cp[1]=1;
				 cp[a]=1;
				 cp[b]=1;
				 cp[c]=1;
				 cp[a*b]=1;
				 cp[a*c]=1;
				 cp[b*c]=1;
				 cp[a*b*c]=1;
				 bool allok = true;
				 for (int y=0; y<k && allok; y++)
				 {
                    if (cp[pr[y]] != 1)
						allok =false;
				 }
				 if (allok)
				 {
                   found = true;
				   ra=a;
				   rb=b;
				   rc=c;
				 }
			  }
		   }
		}
        fout << ra << rb << rc << endl;
	 }
  }

   return 0;
}

