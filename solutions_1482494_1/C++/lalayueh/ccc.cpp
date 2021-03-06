#include <cstdio>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <cmath>

using namespace std ;

int win[1000] ;
int star[1000][2] ;
int N ;

int choice( int exp, int& level )
{
  int index = -1 ;
  int diff = 0 ;

  for ( int i = 0 ; i < N ; i++ ) 
  {
    if ( win[i] == 2 ) 
      continue ;

    if ( star[i][1] <= exp ) 
    {
      index = i ;
      level = 2 ;

      return i ;
    }

    if ( win[i] == 0 ) 
    {
      if ( star[i][0] <= exp ) 
      {
        if ( star[i][1] - exp > diff )
        {
          diff = star[i][1] - exp ;
          index = i ;
          level = 1;
        }
      }
    }
  }

  return index ;
}

int solve() 
{
  int exp = 0 ;
  int ans = 0 ;
  int complete = 0 ;

  while ( N > complete )
  {
    int level;
    int index = choice( exp, level ) ;

    if ( index == -1 )
      return -1 ;

    if ( level == 2 )
      complete ++ ;

    exp = exp + level - win[index] ;
    win[index] = level ;

    ans ++ ;
  }

  return ans ;
}

int main()
{
  freopen( "A-small-practice.in", "r", stdin ) ;
  freopen( "output.txt", "w", stdout ) ;
  int T ;
  cin >> T ;
  for ( int n = 1 ; n <= T ; n++ )
  {
    cin >> N ;
    for ( int i = 0 ; i < N ; i++ )
    {
      cin >> star[i][0] ;
      cin >> star[i][1] ;
      //cout << star[i][0] << " " << star[i][1] << endl ;
    }

    memset( win, 0, sizeof( win ) ) ;
    int ans = solve() ;

    if ( ans == -1 )
      printf("Case #%d: Too Bad\n", n ) ;
    else
      printf("Case #%d: %d\n", n, ans ) ;
  }
}