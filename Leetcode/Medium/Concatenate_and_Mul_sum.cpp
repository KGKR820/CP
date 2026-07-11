#include <bits/stdc++.h>
using namespace std;
static const int MOD = 1e9 + 7;
vector<int> sumAndMultiply(string s, vector<vector<int>> &queries) {
  int n = s.length();
  vector<long long> num(n + 1);
  vector<int> prefSum(n + 1);
  vector<int> len(n + 1);
  num[0] = 0;
  prefSum[0] = 0;
  len[0] = 0;
  for (int i = 1; i < n + 1; i++) {
    if (s[i - 1] == '0') {
      num[i] = num[i - 1];
      len[i] = len[i - 1];
      prefSum[i] = prefSum[i - 1];
    } else {
      num[i] = (num[i - 1] * 10 + (s[i - 1] - '0')) % MOD;
      len[i] = len[i - 1] + 1;
      prefSum[i] = prefSum[i - 1] + (s[i - 1] - '0');
    }
  }
  vector<long long> pow10(len[n]);
  pow10[0] = 1;
  for (int i = 1; i <= len[n]; i++) {
    pow10[i] = (pow10[i - 1] * 10) % MOD;
  }

  vector<int> ans(queries.size());

  for (int i = 0; i < queries.size(); i++) {
    int l = queries[i][0];
    int r = queries[i][1];
    int sum = prefSum[r + 1] - prefSum[l];
    int digits = len[r + 1] - len[l];
    long long x = (num[r + 1] - (num[l] * pow10[digits]) % MOD + MOD) % MOD;
    ans[i] = (x * sum) % MOD;
  }
  return ans;
}
