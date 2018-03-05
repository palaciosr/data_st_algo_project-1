#include <iostream>
#include <cassert>
#include <vector>
#include <math.h>       /* floor */  /// allows for floor function
#include <algorithm>   //

// The binary search algorithmn allows for any array   
// to be sorted in ascending order 
// Effectively binary search splits the array into two parts 
// The partitions in the left are less than those on the right
// By making multiple comparisons with the mid middle value 
// Where the middle value is less than , equal to, or greater than the 
// Values it is being compared to

using namespace std;
long binary_search( vector<long> &a,int x) 
    // a is passed by ref  (a[i] is a vector) 
    //x is m passed by value 
{

    int mid;//i;
    int left = 0; // min
    int right = a.size(); 
    while(left<=right) 
    {
        
        mid= left +floor((right- left)/2);
        
        if (x==a[mid])
        
            return mid; // was mid
        
    else if (a[mid]<x)  //return binary_search(a, left,mid-1,x);
        
        left = mid+ 1;
        
    else
        right= mid-1;
    }
    return -1; // any negative number in an vector/array in  C++ means it is not a valid value 
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
  // the above commented sort would be an easy way to sort the array
  // As it would take advantage of the #algorithmn library 

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

