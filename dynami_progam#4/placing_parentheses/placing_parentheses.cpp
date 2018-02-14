#include <iostream>
#include <cassert>
#include <string>
#include <vector>
#include <limits>
using namespace std;

 // keep long long eval
 // Min_max(i,j)
 long long eval(long long a, long long b, char op)
{
  if (op == '*')
  {
    return a * b;
  }
  else if (op == '+')
  {
    return a + b;
  }
  else if (op == '-')
  {
    return a - b;
  }
  else
  {
    assert(0);
  }
}
//
parantheses()   // d[n]  op[n] // n-1
{
    // 2-D vector
    //vector< vector<int> > D(word_1 + 1, vector<int>(word_2 + 1));
    //  have to callll eval
    vector<vector<int> > Alpha; // M   max
    vector<vector<int> > Beta; // m   min
    vector<int>d;
    vector<int> op; // might be a string
    int small, large;
    max_digit= numeric_limits<int>lowest(); // need to change  should be "minus" infinity 
      
    min= numeric_limits<int> max();  // this is going to conflict ,,, + inifinty 
    
    int a,b,c,d; // conflict with d
    vector<int> d;  // int or vector ???
    int i,s,n,j,k;

    for(i=1;i<n;i++)
    {
        // can use this here  BUT need proper intializing for 2-D
        Alpha[i][i]= d[i];
        Beta[i][i]= d[i];
        // a= Alpha[i][k];
        for(s=1;s<n-1; s++)
        {
            for(i=1;i<n-s; i++)
            {
                j= i+s;
        Alpha[][]
                
            }
        }
    }
    return Beta[1][n];
}
// needs to be a string
long long get_maximum_value(const string &exp)  // string passed by reference s in main
{
    vector<vector<int> > Alpha; // M   max
    vector<vector<int> > Beta; // m   min
    int max, min;
    int i,j,k;
     max_digit= numeric_limits<int>max(); // need to change
    min= numeric_limits<int> lowest();
    for (k;k<j-1; k++)//
        
        small= min(small,a,b,c,d);
    large= max(large,a,b,c,d);
    
    return (small,large);
    
    
  //write your code here neeed to call eval
  return 0;
}

int main()
{
  string s;
  cin >> s;
  cout << get_maximum_value(s) << '\n';
}
