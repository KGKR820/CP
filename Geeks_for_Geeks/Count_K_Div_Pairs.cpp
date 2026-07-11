#include <bits/stdc++.h>
using namespace std;
int countKdivPairs(vector<int> &arr, int k) {
  vector<int> num(k, 0);
  int ans = 0;
  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] % k == 0) {
      ans += num[0];
    } else {
      ans += num[k - (arr[i] % k)];
    }
    num[arr[i] % k]++;
  }
  return ans;
}
