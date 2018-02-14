#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using std::vector;
// larges common subsequence of three vectors 3-D
//similar to edit distance
int lcs3(vector<int> &a, vector<int> &b,vector<int> &c)
{
    int i,j,k,x,y,z,g,h;
    int n=a.size();
    int m=b.size();
    int l=c.size();
    int D[n+1][m+1][l+1];
    // can use an array
    for (i=0;i<=n;i++)
    {
        for(j=0;j<=m;j++)
        {
            for (k=0;k<=l;k++)
            {
                if (i==0 || j==0 || k==0)
                    D[i][j][k]=0 ; // base case
                else if((a[i-1] == b[j-1])  && (a[i-1]== c[k-1]))
                  D[i][j][k]= D[i-1][j-1][k-1]+1;
                    else
                        D[i][j][k] = std::max(std::max(std::max(std::max(std::max(D[i-1][j][k], D[i][j-1][k]), D[i][j][k-1]), D[i-1][j-1][k]), D[i-1][j][k-1]),D[i][j-1][k-1]);
                
            }
        }
    }
    return D[n][m][l]; /// returning an arraty
}

int main()
{
  size_t an;
  cin >> an;
  vector<int> a(an);
  for (size_t i = 0; i < an; i++)
  {
    cin >> a[i];
  }
  size_t bn;
  cin >> bn;
  vector<int> b(bn);
  for (size_t i = 0; i < bn; i++)
  {
    cin >> b[i];
  }
  size_t cn;
  cin >> cn;
  vector<int> c(cn);
  for (size_t i = 0; i < cn; i++)
  {
    cin >> c[i];
  }
    cout << lcs3(a, b,c)<< endl;
}
/*
 x=max(D[i-1][j][k],D[i][j-1][k]);
 y=max(D[i][j][k-1],x);
 z=max(D[i-1][j-1][k],y);
 g=max(D[i][j-1][k-1],z);
 D[i][j][k]=max(D[i-1][j][k-1],g);
 //D[i][j][k]=h;
 */
