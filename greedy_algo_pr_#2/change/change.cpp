#include <iostream>
using namespace std;

int get_change(int m)
{
    int dimes=0,nickels=0,pennies=0,count=0;
    int coins;
    
    while(m>=10)
    {
        count++;
        dimes++;
        m=m-10;
    
    }
    
    while(m>=5)
    {
        count++;
        nickels++;
        m=m-5;
        
    }
    while(m>=1)
    {
        count++;
        pennies++;
        m=m-1;
        
    }
     coins = dimes +pennies +nickels ;
    return coins;
    
}

int main() {
  int m; // switched m into a double
  cin >> m;
  cout << get_change(m) << '\n';
}
