#include <iostream>
#include <vector>
using namespace std;

vector<int> optimal_summands(int n)
{
  vector<int> summands;
//    int l;
 
    if ( n<=2)
    {
        summands.push_back(n);
    }
    
    else
    {
         int l=1 ;
    
        while (n> 2*l)  // given in proof k>2*l
        {
            summands.push_back(l);
            n=n-l;   //(k-l)
            
            l= l +1;  //l+1
            
        }
        summands.push_back(n);
    }
   return summands;//.push_back(n);
    
}

int main()
{
    int n;
    cin >> n ;
    vector<int> summands = optimal_summands(n); // this function is assigned as a vector
    cout << summands.size() << '\n'; // size of the amount of values in summands
        for (size_t i = 0; i < summands.size(); ++i)
        {
            cout << summands[i] << ' '; // reads the value 1 2 ....
        }
}
