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
     int e, r, n;
	 fin >> e >> r >> n;
	 vector <int> v;
	 for (int i=0; i<n; i++)
	 {
        int t = 0;
		fin >> t;
		v.push_back(t);
	 }

	 long long gain = 0;
	 long long cur  = e;
	 for (int i=0; i<n; i++)
	 {
       bool betterFound = false;
	   int betterInd    = 0;
	   for (int j=i+1; j<n && !betterFound; j++)
	   {
          if (v[j] >= v[i])
		  {
             betterFound = true;
			 betterInd   = j;
		  }
	   }
	   if (betterFound)
	   {
          int dis = betterInd-i;
		  int newe = cur + r*dis;
		  if (newe > e)
		  {
             
             int spent = newe - e;
			 if (cur < spent)
				 spent=cur;
			 gain = gain + v[i]*spent;
			 cur  = cur - spent;
		  }
	   }
	   else
	   {
          gain = gain+v[i]*cur;
		  cur = 0;
	   }
	   cur=cur+r;
	 }

     fout << "Case #" << tt+1 << ": " << gain << endl;
  }

   return 0;
}

