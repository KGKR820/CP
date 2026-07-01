#include <bits/stdc++.h>
using namespace std;
vector<int> findErrorNums(vector<int> &nums) {
  int n = nums.size();
  vector<int> freq(n + 1, 0);
  for (int ele : nums) {
    freq[ele]++;
  }
  int missing, repeat;
  for (int i = 1; i <= n; i++) {
    if (freq[i] == 0) {
      missing = i;
    } else if (freq[i] == 2) {
      repeat = i;
    }
  }
  return {repeat, missing};
}
