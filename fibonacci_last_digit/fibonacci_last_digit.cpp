#include <iostream>
using namespace std;
// this program returns large values of a fib sequence 
// however it only return the last digit
// by taking the modules we know that the last digit in any sequence
// has to be between 0-9 



int get_fibonacci_last_digit_fast(int n)
{
    int  array[n+1];// has to start with an array  at 0 NOT 1
    // taking care of the fib sequence
    int i;
          array[0]=0;
        array[1]=1;
        array[2]=1;

    for (i=2; i<=n; i++)
        
        array[i] = (array[i-1] + array[i-2])%10 ;
    // need to be able to get the two arrays to equal one first
	// above we include the base case by starting with 2 
	// we use the modules operation here since there can only be 0-9 digits 
	// that is the last digit has to be one of these digits 
    return  array[n];
    
}

int main()
    {
    int n;
    cin >> n;
    int c = get_fibonacci_last_digit_fast(n); //need to get the fast approach
    cout << c << '\n';
    }
