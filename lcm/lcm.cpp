#include <iostream>
using namespace std;
// this program is for computing the 
// least common multiple
// it makes use of Euclid's algorithmn
// Here we use recurssion so that the 
// function calls itself

long long Euclid_gcd_fast(int x, int y )
{
    if(x%y==0)
		// checks if x is divisible by y 
		// hence the mod
        return y;
    else
	    // callls itself 
        return (long long) Euclid_gcd_fast(y, x%y);
}


long long lcm_fast(long long a, long long b)
{
    long long c;
    c= a*b;
 
    //int n= Euclid_gcd_fast(a,b);
    // uses recurssion 
    // make a call to the Euclid_gcd_fast  function
	
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
