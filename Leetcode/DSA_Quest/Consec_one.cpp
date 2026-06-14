#include <bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int> &nums) {
  int i = 0;
  int n = nums.size();
  int mx = 0;
  while (i < n) {
    if (nums[i] == 1) {
      int len = 1;
      i++;
      while (i < n and nums[i] == 1) {
        len++;
        i++;
      }
      mx = max(mx, len);
    } else {
      i++;
    }
  }
  return mx;
}
