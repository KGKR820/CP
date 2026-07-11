#include <bits/stdc++.h>
using namespace std;
static bool compare(const vector<int> &a, const vector<int> &b) {
  if (a[0] == b[0]) {
    return a[1] > b[1];
  } else {
    return a[0] < b[0];
  }
}
int removeCoveredIntervals(vector<vector<int>> &intervals) {
  sort(intervals.begin(), intervals.end(), compare);
  int count = 0;
  int maxEndTime = -1;
  for (auto &in : intervals) {
    if (in[1] > maxEndTime) {
      maxEndTime = in[1];
      count++;
    }
  }
  return count;
}
int main() {
  vector<vector<int>> arr = {{1, 2}, {1, 4}, {3, 4}};
  cout << removeCoveredIntervals(arr);
}
