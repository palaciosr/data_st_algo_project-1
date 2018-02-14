#include <algorithm>
#include <iostream>
#include <climits>
#include <vector>
using namespace std;

 struct Segment
 {
 int start, end;
 };

bool check(Segment i, Segment j)
{return  (i.end< j.end);}

vector<int> optimal_points(vector<Segment> &segments)
{
   vector<int> points;
   // check is part of the bool
    sort(segments.begin(),segments.end(), check);
    int acc= segments[0].end;
    points.push_back(acc);
            for (int i=0;i<segments.size();i++)
            {
                if((acc< segments[i].start) || (acc> segments[i].end))
                {
                    acc= segments[i].end;
                points.push_back(acc);
                }
            }
            return points;
 }

int main()
{
  int n;
  cin >> n;
  // segment is coming from the structure 
  vector<Segment> segments(n);  //  vector<int>
  for (size_t i = 0; i < segments.size(); ++i)
  {
    cin >> segments[i].start >> segments[i].end; // we have  1 to 3 for ex
  }
  vector<int> points = optimal_points(segments);
    cout << points.size() << "\n";
  for (size_t i = 0; i < points.size(); ++i)
  {
    cout << points[i] << " ";  // does the poping
  }
}
