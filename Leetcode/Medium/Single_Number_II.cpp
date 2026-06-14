#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int> &nums) {
  // unordered_set<int> set;
  // int val = 0;
  // for (int i : nums) {
  //   if (set.find(i) == set.end()) {
  //     set.insert(i);
  //     val ^= i;
  //   } else {
  //     set.erase(i);
  //   }
  // }
  // return val;
  int ones = 0;
  int twos = 0;
  for (int i : nums) {
    ones = ones ^ (i & ~twos);
    twos = twos ^ (i & ~ones);
  }
  return ones;
}
int main() {
  vector<int> nums = {2, 2, 3, 2};
  cout << singleNumber(nums);
}
