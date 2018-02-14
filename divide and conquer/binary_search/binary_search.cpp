#include <iostream>
#include <cassert>
#include <vector>
#include <math.h>       /* floor */  /// allows for floor function
#include <algorithm>   //

using namespace std;
long binary_search( vector<long> &a,int x) // a passed by ref a is a[i] and x is m passed by value took constant off of  vector 'a'
{

    int mid;//i;
    int left = 0; // min
    int right = a.size(); //  took int off for now
    while(left<=right) //
    {
        
        mid= left +floor((right- left)/2);
        
        if (x==a[mid])
        
            return mid; // was mid
        
    else if (a[mid]<x)  //return binary_search(a, left,mid-1,x);
        
        left = mid+ 1;
        
    else
        right= mid-1;
    }
    return -1; // any negative number
}
// first two for loops are for inputting the  sequence a[i] then b[i]
// where a[i] is sorted and b[i] is not , we look for the values of b[i]
// in a[i] at look at where those values would be inserted as indices
// so we start at index 0

// need to check the stress case
int main()
{
  int n;
  cin >> n;
  vector<long> a(n);  // val
  for (size_t i = 0; i < a.size(); ++i)
  {
    cin >> a[i];
  }
  //  sort(a.begin(),a.end());

   int m; // x in binary search function
  cin >> m;
  vector<long> b(m);   // this is only part of the main
  for (int i = 0; i < m; ++i)
  {
    cin >> b[i];
  }
    
    for (int i = 0; i < m; ++i) // ++i
    {
          cout << binary_search(a, b[i]) << ' ';
    }
}
//return a[left-1];
//right= mid-1;
/*if  (right< left)
 {
 //return -1;
 }*/
