#include <iostream>
using namespace std;
// this program used the Eucildean algorithmn to
// calculate the greatest common divisor 
// We essentially use recursion 
// Whereby the function calls itself 


 
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
