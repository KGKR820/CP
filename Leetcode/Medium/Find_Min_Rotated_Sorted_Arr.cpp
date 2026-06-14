#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int> &nums) {
  int l = 0;
  int r = nums.size() - 1;
  while (l < r) {
    int mid = (l + r) / 2;
    if (mid == l)
      return min(nums[l], nums[r]);
    if (nums[mid] < nums[nums.size() - 1]) {
      r = mid;
    } else {
      l = mid;
    }
  }
  return nums[l];
}
int main() {
  vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
  cout << findMin(nums) << endl;
}
