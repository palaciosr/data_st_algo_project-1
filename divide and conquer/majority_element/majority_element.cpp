#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h>       /* floor */  /// allows for floor function
using namespace std;
// particular value and then seeing if those values show
// up more that 50% of the time
// namely some element > a.size()/2
// possibly need another function
// have a probel with the vector 'a' in both the
// merge function
//int Merge(vector<long> b,vector<long> c,vector<long> &a)
// try technique from binary search since its left and right lower and upper halves
// a[left.........right]
int Count_element(const vector<int> &a, int left, int right,int numb_elements)
{
    int count=0;
    
    for (int i=left; i<=right; i++)
    {
       if (a[i]==numb_elements)
       {
        count++;
       }
    }
    return count;
}
//

// currently when we include just return 1's we get 1's
// return 0 returns 0 for anything other than 1
int get_majority_element(vector<int> &a, int left, int right)
{
   // int g= a.size(); cant do this
    //int accumulator; like binary search
    int mid = left+(right-left)/2;
    int alpha;
    alpha = right -left +1;
    
    //if (a.size()<=2)
      //  return 0; // special cases 3 4 5

    if (left> right)
    {
        return -1;
    }

    if (left == right)
        {
        return a[left];
        }
    int lower_half= get_majority_element(a,left,mid);
    int upper_half = get_majority_element(a,mid+1,right);

        if (lower_half==-1 && upper_half!=-1)
            {
               int accumulator = Count_element(a,left,right,upper_half);

                if (accumulator> (right-left+1)/2)
                {
                // breacket
                    return upper_half;
                }
                // need to return  1 so need to create another boolean function .. possilbe just return 1 and 0 w/o boolean function
                else
                {
        
                    return -1;
                }
            }
    
                else if (lower_half!=-1 && upper_half==-1)
                {
                int accumulator= Count_element(a, left,right,lower_half);
                    
                    if (accumulator> (right-left+1)/2)
                    {
                        return lower_half;
                    }
                    
                    else
                    {
                    
                        return -1;
                    }
                
                }

        else if (lower_half!=-1 && upper_half!=-1)
        {
            int m = Count_element(a,left,right,lower_half);
            int z = Count_element(a,left,right,upper_half);
            if( m>(right-left+1)/2)
            {
                return lower_half;
            }
            else if (z>(right-left+1)/2)
            {
                return upper_half;
            
            }
            else
            {
                return -1;
            }
        }
    else
    {
        return -1;
    }
}
    // need fior negative numbe
// need another one to take care of the
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < a.size(); ++i)
    {
        cin >> a[i];
    }
    
     cout << (get_majority_element(a, 0, a.size()-1 )!= -1) << '\n';
}
