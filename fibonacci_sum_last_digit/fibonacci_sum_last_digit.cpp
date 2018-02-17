#include <iostream>

int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;
    
    
    

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10; // need to erase this coomment out
}




    int fibonacci_sum_fast(long long n )
        {
            
            for (i=2; i<=n; i++ )
            {
            int array[i];

			int f[i]=0;
                
			array[i] = (array[i - 1] + array[i - 2]) % 10;

			f[i] = array[i] + f[i];


                
            }
    
        }

int main() {
    long long n = 0;
    std::cin >> n;
    std::cout << fibonacci_sum_naive(n);
}
