#include <iostream>
#include <vector>
using namespace std;
using std::vector;

long long Merge(vector<int> &a, vector<int> &b, int left,int mid, int right) // need to fix the ordering of parameters
{
 int i=left,j=mid,k=left;
 long long  number_of_inversions=0;
 
    while((i<=mid-1) && (j<=right))
    {
        if (a[i]<=a[j])
        {
            b[k]=a[i];
            k++;
            i++;
        }
        else
        {
            b[k]= a[j];
            k++;
            j++;
            number_of_inversions= number_of_inversions + (mid-i);
        }
    }
    while(i<=mid-1)
    {
        b[k]= a[i];
        i++;
        k++;
    }
    while(j<=right)
    {
        b[k]= a[j];
        j++;
        k++;
    }
    for (i=left; i<=right;i++)
    
        a[i]= b[i];
    
    return number_of_inversions;
}
long long Merge_sort(vector<int> &a, vector<int> &b, int left, int right) // acts as mergesort and calls merge
{
    long long number_of_inversions = 0;
     if (right <= left )
    return number_of_inversions; // returns 0 nneed for base case
    
  int mid= left+ (right-left)/2;  // + left?

        number_of_inversions += Merge_sort(a, b, left, mid); // but take merge sort recursivessness

    number_of_inversions += Merge_sort(a, b, mid+1, right);  // and incldue a counter
  
    number_of_inversions= number_of_inversions+ Merge(a,b,left,mid+1,right);// too many parameters
    
    return number_of_inversions;
}

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < a.size(); i++)
  {
    cin >> a[i];
  }
  vector<int> b(a.size());
    
    cout << Merge_sort(a, b, 0, a.size()-1) << '\n';
   
}
