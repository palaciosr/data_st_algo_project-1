#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

using std::vector;

//480

long long max_dot_product(vector<int> a, vector<int> b)
{
    
    long long result = 0;

 
    // need to get the max of a_i and b_i
    // then the max of the remaining in
    // descending order
    // get a[i] up to n in descending order
    // then do the same for b[i]
    // mutliply which gives the max product
    //use sort function and
    
    sort( a.begin(), a.end());
    sort( b.begin(), b.end());

    
    //size_t a.size()
    
  for (int i = 0; i < a.size(); i++)
  {
    result += ((long long) a[i]) * b[i];
  }
  return result;
}

int main() {
  size_t n;
  cin >> n;
  vector<int> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    cin >> b[i];
  }
  cout << max_dot_product(a, b) << endl;
}
