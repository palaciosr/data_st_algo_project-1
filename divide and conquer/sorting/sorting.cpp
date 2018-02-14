#include <iostream>
#include <vector>
#include <cstdlib>
#include <math.h>       /* floor */  /// allows for floor function
using namespace std;
//using std::vector;
using std::swap; // swap function struc

// randomize sorting O(nlogn) time complexity 


// program for randomized quicksort 

vector<int> partition3(vector<int> &a, int l, int r)
{
	// l should be left and r is right
    int x = a[l];
    int m1=l;
    int m2=r;
    int i= l;
    
	// if the left less than the right then 
    while(i<=m2)
    {
        if(a[i]<x)
        {
            swap(a[i],a[m1]);
            m1++;
            i++;
        }
        else if (a[i]> x)
        {
            swap(a[i],a[m2]);

            m2--;
        }
        else
            i++;
    }
    vector <int> m= {m1,m2};
    return m;
}

void randomized_quick_sort(vector<int> &a, int l, int r)
{
  if (l >= r)    // n<2 just return that same vector no need to sort
  {
    return;
  }
  
  int k = l + rand() % (r - l + 1);
  swap(a[l], a[k]);
  // calling partition function 
 vector <int> m = partition3(a, l, r);
    // change only  to partition 3
    // m_1 and m_2 two vectors
    //    int mid=l;
    //int p = a[r];

  randomized_quick_sort(a, l, m[0] - 1);   // calling itself twice
  randomized_quick_sort(a, m[1] + 1, r);
}
// always keep main
int main()
{
  int n;
  std::cin >> n;   // n is x
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i)
  {
    std::cin >> a[i];
  }
  randomized_quick_sort(a, 0, a.size() - 1);// randomize calls partition_3
  //this is done recursively 
  for (size_t i = 0; i < a.size(); ++i)
  {
    std::cout << a[i] << ' ';
  }
}
// input : 5
// 2 3 9 2 2
// 2 2 2 3 9
//
//int x = a[l];   // is the pivot point so should be the last element in the vector but not the max value courrently w/o sorting
// this element is in the position where the max value should be
// int j = l;
//int y = a.size();
//int mid = floor (y/2);
//int  v= mid-1;
// n is x the element in A
//
// l is min.... r is max
// l is the lower half
// r is the upper half
// w = a.size()/2  floor it    //  for (i=l; i<mid; i++)
// l<= k <= m_1-1   a[k]<x
//
//
/*
 int partition2(vector<int> &a, int l, int r)  two paritions because there are two halves here   has < and >
 //this does not sort the vector it only gives the pivot point such as 6
 // and then everything to the right is
 {
 int x = a[l];
 int j = l;
 for (int i = l + 1; i <= r; i++)
 {
 if (a[i] <= x)  // this would inlcude evertything up to n from the main
 {
 j++;
 swap(a[i], a[j]);
 }
 }
 swap(a[l], a[j]);
 return j;
 }
 
 */
/*
 for (int i = l ; i <=r; i++)  /// l+1
 {
 
 if (a[i] < x)  // might be mid -1
 {
 j++;
 swap(a[i], a[j]);
 }
 
 if (a[i]==x)  //might be mid
 {
 //int p;
 //a[mid]=p
 j++;
 // swap(a[i], a[j]);
 }
 
 // esseentially another if
 if(a[i]> x)
 {
 j++;
 swap(a[i], a[j]);
 }
 return j;
 }
 */

//if (i=mid )
//  a[k]
// for (i=mid;i<  ;i++)
//
//  int k = l + rand() % (r - l + 1);
//
// for (i=mid+1; ; i++)
//
//
///
/*
 for (int i=0; i<w; i++)
 if (a[i]<x)
 
 */
//   int m = partition2(a, l, r);  // change only  to partition 3
//
