#include <bits/stdc++.h>
using namespace std;
struct DST {
  vector<int> prnt, sz;
  DST(int n) {
    prnt.resize(n + 1);
    sz.assign(n + 1, 1);
    for (int i = 0; i < n + 1; i++)
      prnt[i] = i;
  }
  int findparent(int v) {
    if (prnt[v] == v) {
      return v;
    }
    return prnt[v] = findparent(prnt[v]);
  }
  void connect(int u, int v) {
    int pu = findparent(u);
    int pv = findparent(v);
    if (pu == pv)
      return;
    if (sz[pu] >= sz[pv]) {
      sz[pu] += sz[pv];
      prnt[pv] = pu;
    } else {
      sz[pv] += sz[pu];
      prnt[pu] = pv;
    }
  }
};
int minScore(vector<vector<int>> &edges, int n) {
  DST DS(n);
  for (auto edge : edges) {
    DS.connect(edge[0], edge[1]);
  }
  int p = DS.findparent(1);
  int ans = INT_MAX;
  for (auto edge : edges) {
    if (DS.findparent(edge[0]) == p) {
      ans = min(ans, edge[2]);
    }
  }
  return ans;
}
