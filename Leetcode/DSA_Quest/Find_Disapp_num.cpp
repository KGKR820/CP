#include <bits/stdc++.h>
using namespace std;
vector<int> findDisappearedNumbers(vector<int> &nums) {
  vector<int> res;
  int n = nums.size();
  res.reserve(n - 1);
  for (int i = 0; i < n; i++) {
    int idx = abs(nums[i]) - 1;
    if (nums[idx] > 0) {
      nums[idx] = -nums[idx];
    }
  }
  for (int i = 0; i < n; i++) {
    if (nums[i] > 0) {
      res.push_back(i + 1);
    }
  }
  return res;
}
