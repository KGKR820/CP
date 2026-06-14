#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int> &nums) {
  if (nums.empty()) {
    return 0;
  }
  unordered_set<int> set;

  // Insert all ele into hash set
  set.insert(nums.begin(), nums.end());

  int mx = 1;

  // Loop through all entries of the set
  for (int i : set) {

    // If we find just behind number we are gonna skip as it longestConsecutive
    // seq is handled by that behind ele
    // If not init a len =1 and check if next ele is present

    if (set.find(i - 1) == set.end()) {
      int curr = i;
      int len = 1;
      while (set.find(curr + 1) != set.end()) {
        curr++;
        len++;
      }
      mx = max(mx, len);
    }
  }
  return mx;
}
int main() { return 0; }
