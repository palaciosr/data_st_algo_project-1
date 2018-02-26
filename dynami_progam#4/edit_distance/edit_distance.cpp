#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int edit_distance(const string str1, const string str2) // changed pass by reference
{
    int i,j;
    int word_1 = str1.length();
    int word_2 = str2.length();
    vector< vector<int> > D(word_1 + 1, vector<int>(word_2 + 1)); // 2-d vector can use an array 


    for (i=0;i<=word_1;i++)
        D[i][0]=i;
    for(j=1;j<=word_2;j++)
        D[0][j]=j;
            for (i=1;i<=word_1;i++)
            {
                for(j=1;j<=word_2;j++)
                {
                    int x,y;
                    x= min (D[i-1][j]+1, D[i][j-1]+1);
                    y= min(x,D[i-1][j-1] + (str1[i-1] == str2[j-1] ? 0 : 1));
			
                    D[i][j]=y;
                }
            }
    return D[word_1][word_2];
}

int main()
{
  string str1;
  string str2;
  cin >> str1 >> str2;
  cout << edit_distance(str1, str2) << endl;
    return 0;
}
