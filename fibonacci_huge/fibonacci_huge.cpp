#include <iostream>
using namespace std;

long long fib_huge_fast(long long n, long long m) //not sure if the longs are needed
    {
        long long i;
        long long j;
        long long F[n+1];
        F[0]= 0;
        F[1]= 0;
        int m;
        
        for (i=2; i<=n+1; i++) // not sure about the 2
            
            F[i]= (F[i-1]+ F[i-2])%m;  // F[i]%m
            F[i]= F[i]%m;
        
    return   F[n]%m;   // need to include the modules (return)
    }

int main()
{
    long long n, m;
    cin >> n >> m;
    cout << fib_huge_fast(n, m) << '\n';
}
/*
 long long get_fibonacci_huge_naive(long long n, long long m) {
 if (n <= 1)
 return n;
 long long previous = 0;
 long long current  = 1;
 for (long long i = 0; i < n - 1; ++i) {
 long long tmp_previous = previous;
 previous = current;
 current = tmp_previous + current;
 }
 return current % m;
 }
 */
// need a for loop
// 1 for loop for  fi
// another for modules m
//for ( can include m's here )
//for (j=2; j<=m; i++   )
// B[i]= F[i]   B[]
