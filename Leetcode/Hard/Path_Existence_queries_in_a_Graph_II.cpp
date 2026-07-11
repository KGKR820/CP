#include <bits/stdc++.h>
using namespace std;
vector<int> minDistanceQueries(int n, vector<int> &nums, int maxDiff,
                               vector<vector<int>> &queries) {
  vector<pair<int, int>> srtNums(n);

  for (int i = 0; i < n; i++)
    srtNums[i] = {nums[i], i};

  sort(srtNums.begin(), srtNums.end());

  vector<int> pos(n);

  for (int i = 0; i < n; i++)
    pos[srtNums[i].second] = i;

  vector<int> next(n);

  int r = 0;

  for (int i = 0; i < n; i++) {
    r = max(r, i);

    while (r + 1 < n && srtNums[r + 1].first - srtNums[i].first <= maxDiff) {
      r++;
    }

    next[i] = r;
  }

  const int LOG = 20;

  vector<vector<int>> up(LOG, vector<int>(n));

  for (int i = 0; i < n; i++)
    up[0][i] = next[i];

  for (int k = 1; k < LOG; k++) {
    for (int i = 0; i < n; i++) {
      up[k][i] = up[k - 1][up[k - 1][i]];
    }
  }

  vector<int> ans;

  for (auto &q : queries) {
    int u = pos[q[0]];
    int v = pos[q[1]];

    if (u > v)
      swap(u, v);

    if (u == v) {
      ans.push_back(0);
      continue;
    }

    int cur = u;
    int dist = 0;

    for (int k = LOG - 1; k >= 0; k--) {
      if (up[k][cur] < v) {
        cur = up[k][cur];
        dist += (1 << k);
      }
    }

    if (next[cur] < v)
      ans.push_back(-1);
    else
      ans.push_back(dist + 1);
  }

  return ans;
}
