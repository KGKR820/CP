#include <bits/stdc++.h>
using namespace std;

long long countMajoritySubarrays(vector<int> &nums, int target) {
  int n = nums.size();

  vector<long long> freq(2 * n + 1, 0);
  vector<long long> acc(2 * n + 1, 0);

  freq[n] = 1;
  acc[n] = 1;

  int bal = n;
  long long res = 0;

  for (int num : nums) {
    if (num == target)
      bal++;
    else
      bal--;

    freq[bal]++;
    acc[bal] = acc[bal - 1] + freq[bal];
    res += acc[bal - 1];
  }

  return res;
}
