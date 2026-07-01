#include <bits/stdc++.h>
using namespace std;
vector<int> smallerNumbersThanCurrent(vector<int> &nums) {
  vector<int> cnt(101, 0);
  for (int ele : nums) {
    cnt[ele]++;
  }
  int total = 0;
  for (int i = 0; i <= 100; i++) {
    int temp = cnt[i];
    cnt[i] = total;
    total += temp;
  }
  vector<int> res;
  res.reserve(nums.size());
  for (int ele : nums) {
    res.push_back(cnt[ele]);
  }
  // 9550815816
}
