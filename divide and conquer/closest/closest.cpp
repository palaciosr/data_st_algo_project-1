#include <algorithm>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <vector>
#include <string>
#include <cmath>

/*using std::vector;
using std::string;
using std::pair;
using std::min; */
using namespace std;

// not yet finished


double minimal_distance(vector<int> x, vector<int> y) {
  //write your code here
  /*
  vector <int> z;
  int low=0; 
  
   for (int i=0;i<N ; i++)
   {
    z[i]=x[i]*y[i];
    //low[i]=z[i] 
    // if (low[i]<z[i])
    // return the lowest in the iteration of those pairs 
    
    min (low, z[i])
   }
  
  */
  return 0.;
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> x(n);
  vector<int> y(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> x[i] >> y[i];
  }
  std::cout << std::fixed;
  std::cout << std::setprecision(9) << minimal_distance(x, y) << "\n";
}
