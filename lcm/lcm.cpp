#include <iostream>
using namespace std;
// this program is for computing the 
// least common multiple
// it makes use of Euclid's algorithmn

// gives a naive solution and is very slow for big numbers
/*long long lcm_naive(int a, int b)
{
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
} */

// try manipulating a and be to x y
/*
long long Euclid_gcd_fast(int a, int b )
{
    if(a%b==0)
        return b;
    else
        return (long long) Euclid_gcd_fast(b, a%b);
}  */
long long Euclid_gcd_fast(int x, int y )
{
    if(x%y==0)
		// checks if x is divisible by y 
		// hence the mod
        return y;
    else
        return (long long) Euclid_gcd_fast(y, x%y);
}


long long lcm_fast(long long a, long long b)
{
    long long c;
    c= a*b;
 
    //int n= Euclid_gcd_fast(a,b);
    // uses recurssion 
    long long z= c/(Euclid_gcd_fast(a,b));
    
    return (long long) z;

}
// need a faster function here relating GCD and LCD
int main()
{
  long long a, b;
  cin >> a >> b;
  cout << lcm_fast(a, b) << endl;
  return 0;
}
