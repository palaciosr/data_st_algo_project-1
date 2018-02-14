#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int optimal_weight(int capacity, const vector<int> &weights)   //const vector<int> &weights)
{
    int j;
    vector<int> W(capacity+1); // not indvidual weights 
    
    for(int i=0;i<weights.size();++i)
    {
        for(j=capacity;j-weights[i]>=0;--j)
        {
            W[j]= max(W[j],W[j-weights[i]]+weights[i]);
        }
    }
    return W[capacity];//[x];
}

int main()
{
  int n, capacity;
  cin >> capacity >> n;
    vector<int> weights(n);

    for (int i = 0; i < n; i++)
  {
    cin >> weights[i];
  }
    
    
 
    cout << optimal_weight(capacity, weights) << '\n';
}
