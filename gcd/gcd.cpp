#include <iostream>
using namespace std;

/*
int gcd_naive(int a, int b)
{
  int current_gcd = 1;  //should not include the brackets inside the for loop
  for (int d = 2; d <= a && d <= b; d++)
  {
    if (a % d == 0 && b % d == 0)
    {
      if (d > current_gcd)
      {
        current_gcd = d;
      }
    }
  }
  return current_gcd; // going to have to delete this entire gcd naive function
}

 */
 
 
 int Euclid_gcd_fast(int a, int b )
{
    if
            
             (a%b==0)
                return b;
    else
        return Euclid_gcd_fast(b, a%b);
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << Euclid_gcd_fast(a, b) << endl;
  return 0;
}
