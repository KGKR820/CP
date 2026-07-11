#include <bits/stdc++.h>
using namespace std;
vector<bool> pathExistenceQueries(int n, vector<int> &nums, int maxDiff,
                                  vector<vector<int>> &queries) {
  vector<int> reachableArr(n);
  vector<bool> ans;
  reachableArr[0] = 0;
  for (int i = 0; i < n - 1; i++) {
    if (nums[i + 1] - nums[i] > maxDiff) {
      reachableArr[i + 1] = reachableArr[i] + 1;
    } else {
      reachableArr[i + 1] = reachableArr[i];
    }
  }
  for (int i = 0; i < queries.size(); i++) {
    ans.push_back(reachableArr[queries[i][0]] == reachableArr[queries[i][1]]);
  }
  return ans;
}
