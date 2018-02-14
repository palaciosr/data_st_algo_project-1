#include <iostream>
#include <cassert>

using namespace std;

// The following code calls a naive algorithm for computing a Fibonacci number.
//
// What to do:
// 1. Compile the following code and run it on an input "40" to check that it is slow.
//    You may also want to submit it to the grader to ensure that it gets the "time limit exceeded" message.
// 2. Implement the fibonacci_fast procedure.
// 3. Remove the line that prints the result of the naive algorithm, comment the lines reading the input,
//    uncomment the line with a call to test_solution, compile the program, and run it.
//    This will ensure that your efficient algorithm returns the same as the naive one for small values of n.





// 4. If test_solution() reveals a bug in your implementation, debug it, fix it, and repeat step 3.
// 5. Remove the call to test_solution, uncomment the line with a call to fibonacci_fast (and the lines reading the input),
//    and submit it to the grader.
// Need  to have a "base case " of n=20 brute force way and with a much faster algo

/*
int fibonacci_naive(int n) {
   // int n=40;
    if (n <= 1)
        return n;

    //else ??
    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}
 */



// neeed a class and a template
// with overloaded + to add two arrays

// might have to create a class and or a template

// need a long long type for this


int fibonacci_fast(int n)

        {
        
    int  F[n+1];
    int i;
            F[0]=0;
            F[1]=1;
    for (int i=2; i<=n; i++)
    
        // 0 1 2 3 4 5 6 7  8  9  10
        
        
        // 0 1 1 2 3 5 8 13 21 34 55
        
        
         F[i]= F[i-1] + F[i-2];

        return  F[n];   //z;
    
    //return array[n];
    }


// need to include a
/*
void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}
 */
 

int main()
    {
    int n ;
    
       // cout<< "please enter a number less than 45"<< endl;
    cin >> n;
    
   //// while (n<=45 )//
    //{

    cout << fibonacci_fast(n) << '\n';  // remove or commment
    //test_solution();
    //std::cout << fibonacci_fast(n) << '\n';
    
    }
    //else
      ///  cout<< "Please enter an appropriate number less than or equal to 45"
        //cin>> n;// not sure if i need this ...
