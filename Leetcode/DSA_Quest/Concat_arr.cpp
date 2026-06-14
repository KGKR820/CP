#include <bits/stdc++.h>
using namespace std;
vector<int> getConcatenation(vector<int> &nums) {
  int n = nums.size();
  nums.resize(n * 2);
  for (int i = n; i < 2 * n; i++) {
    nums[i] = nums[i % n];
  }
  return nums;
}
