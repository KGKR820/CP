#include <bits/stdc++.h>
using namespace std;
int minSubArrayLen(int target, vector<int> &nums) {
  int left = 0, sum = 0, ans = INT_MAX;
  for (int i = 0; i < nums.size(); i++) {
    sum += nums[i];
    while (sum >= target) {
      ans = min(ans, i - left + 1);
      sum -= nums[left++];
    }
  }
  return (ans == INT_MAX) ? 0 : ans;
}
