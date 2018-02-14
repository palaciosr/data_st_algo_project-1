#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

bool Is_greater_or_equal(string digit, string max_digit)
    {
        string digitmax_digit= digit.append(max_digit);
        
        string max_digitdigit= max_digit.append(digit);
        
        if(digitmax_digit.compare(max_digitdigit) > 0)
        {
            return true;
        }
        else
        return false;
    }

/*string largest_number(vector<string> a)
{
     sort(a.begin(),a.end(),Is_greater_or_equal);
    //vector<string> result;
     for (size_t i = 0; i < a.size(); i++)
    {
        cout<<a[i];
    }
    //return result;
}*/

int main()
{
  int n;
  cin >> n;
  vector<string> a(n);
  for (size_t i = 0; i < a.size(); i++)
  {
    cin >> a[i];
  }
    
    sort(a.begin(),a.end(),Is_greater_or_equal);

    for (size_t i = 0; i < a.size(); i++)
    {
        cout<<a[i];
    }
    //cout << largest_number(a);
}
