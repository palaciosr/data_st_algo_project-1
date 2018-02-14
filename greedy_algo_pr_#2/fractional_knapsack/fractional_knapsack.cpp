#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//using std::vector;


int get_ratio(vector<int> weights, vector<int> values) //sorting with function
{
    int highest =0;
    double max = 0;
    
    for(int i=0; i<weights.size() ;i++)
        
    {
        if (weights[i]!=0 && (double) values[i]/weights[i]>max)
        {
               max =(double) values[i]/weights[i];
        
        highest =i;
        }
    
    }
    return highest;

}


double get_optimal_value(int capacity, vector<int> weights, vector<int> values)
{
    double total= 0.0;
    int i,n;
    double x;

    //sort(values.begin(), values.end(), greater<int>());
    //sort(weights.begin(), weights.end(), greater<int>());


    for(int i=0; i<weights.size() ;i++)
    {
        //x= values[i]/ weights[i];
          if (capacity==0)
              return total;
        
        
        
        int ind= get_ratio(weights,values); // what is this producing in that function
        
        
        
        //int a = min (capacity, weights[i]);
        double a = min (capacity, weights[ind]);

        
        total = total + a* (double) values[ind]/weights[ind];
        
        weights[ind]= weights[ind]-a;
        
        capacity= capacity -a;

    }
        
        return total  ;
}


int main()
{
  int n;  // number of items that will be entered with a given value
  int capacity; // which is W
  cin >> n >> capacity;
  vector<int> values(n); // values[n]
  vector<int> weights(n); // the weights[i]
    
    for (int i = 0; i < n; i++)
  {
   cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  cout.precision(10);
  cout << optimal_value << endl;
 // return 0;
}
