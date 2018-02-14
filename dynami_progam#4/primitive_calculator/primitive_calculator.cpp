#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm> // reverse vector string 
#include <limits>
using namespace std;

vector<int> optimal_sequence(int n)  // pass by valu
{
    vector<int> sequence; // can assign elements to it
    vector<int> b(n+1);
    //sequence[1]=0; // this is for the base case
    
    for(int i=1;i<b.size();i++)
    {
		// add one 
        b[i]= 1+ b[i-1]; // add one 
		//divide by 2 
        if(i%2==0)
            b[i]= min(b[i], 1+ b[i/2]); 
		// divide by 3 
        if(i%3==0)
            b[i]= min(b[i], 1+ b[i/3]);
    }
    int i=n;
    while(i>1)
    {
    sequence.push_back(i);
        if (b[i-1]==b[i]-1)
            i=i-1;
        
        else if (i%2==0 && (b[i/2]==b[i]-1))
            i=i/2;
            
            else if (i%3==0 && (b[i/3]==b[i]-1))
                i=i/3;
    }
    sequence.push_back(1);
    reverse(sequence.begin(), sequence.end());
    return sequence;
}

int main()  // dont need to pop for loop takes care of that
{
  int n;
  cin >> n;
    vector<int> sequence = optimal_sequence(n);
    
    cout << sequence.size() - 1 << endl;
    
  for (size_t i = 0; i < sequence.size(); ++i)
  {
    cout << sequence[i] << " ";
  }
}
