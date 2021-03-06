//#include "2.h"
#include <stdio.h>
#include <tchar.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <sstream>
#include <map>
#include <set>
#include <deque>
#include <time.h>
#include <iterator>
using namespace std;

typedef long long ll;
typedef pair<int,int> PII;
typedef vector<int> VInt;

#define RFOR(i, a, b) for(i = (a) - 1; i >= (b); --i)
#define CLEAR(a, b) memset(a, b, sizeof(a))
#define SIZE(a) int((a).size())
#define ALL(a) (a).begin(),(a).end()
#define PB push_back
#define MP make_pair

using namespace std;

string processTestCase(fstream& inputFile)
{
	string temp, dummy;
	getline(inputFile, temp);
	int rowNumberInFirstTryStr = atoi(temp.c_str());
	int rowQty = 0;
	set<string> numbersInFirstTryRow;
	{
		while (rowQty++ < 4)
		{
			if (rowQty == rowNumberInFirstTryStr)
				getline(inputFile, temp);
			else
				getline(inputFile, dummy);
		}
		istringstream iss(temp);
		copy(istream_iterator<string>(iss),
				istream_iterator<string>(),
				inserter(numbersInFirstTryRow, numbersInFirstTryRow.begin()));
	}
	getline(inputFile, temp);
	int rowNumberInSecondTry = atoi(temp.c_str());
	rowQty = 0;
	set<string> numbersInSecondTryRow;
	{
		while (rowQty++ < 4)
		{
			if (rowQty == rowNumberInSecondTry)
				getline(inputFile, temp);
			else
				getline(inputFile, dummy);
		}
		istringstream iss(temp);
		copy(istream_iterator<string>(iss),
				istream_iterator<string>(),
				inserter(numbersInSecondTryRow, numbersInSecondTryRow.begin()));
	}
	set<string> intersection;
	set_intersection(ALL(numbersInFirstTryRow), ALL(numbersInSecondTryRow), inserter(intersection, intersection.begin()));
	return (intersection.size() == 1) ? *intersection.begin() : (intersection.empty() ? string("Volunteer cheated!") : string("Bad magician!"));
}
int _tmain(int argc, _TCHAR* argv[])
{
   if (argc != 3)
   {
      std::cerr << "Usage: applicationName inputFileName outputFileName";
      return -1;
   }
   fstream inputFile(argv[1], fstream::in);
   fstream outputFile(argv[2], fstream::out);

   std::string line;
   getline(inputFile, line);
   int testCasesQty = atoi( line.c_str() );
   int testCasesProcessed = 0;
   while (true)
   {
      outputFile << "Case #" << ++testCasesProcessed << ": " << processTestCase(inputFile);
      if (testCasesProcessed == testCasesQty)
         break;
      else
         outputFile  << '\n';
   }
	return 0;
}