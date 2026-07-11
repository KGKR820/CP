#include <bits/stdc++.h>
#include <climits>
using namespace std;
int func(vector<vector<int>> &paths, vector<bool> &online, long long k) {
  int n = online.size();
  if (!online[0] or !online[n - 1])
    return -1;
  vector<vector<pair<int, int>>> adj(n);
  int l = INT_MAX;
  int r = INT_MIN;
  for (auto path : paths) {
    if (!online[path[0]] or !online[path[1]]) {
      continue;
    }
    adj[path[0]].push_back({path[2], path[1]});
    l = min(path[2], l);
    r = max(path[2], r);
  }

  int ans = -1;

  while (l <= r) {
    int mid = (r - l) / 2 + l;
    vector<long long> dist(n, k + 1);
    dist[0] = 0;
    priority_queue<pair<long long, int>, vector<pair<long long, int>>,
                   greater<pair<long long, int>>>
        pq;
    pq.push({0, 0});
    while (!pq.empty()) {

      pair<long long, int> temp = pq.top();
      pq.pop();

      int u = temp.second;
      long long dis = temp.first;

      if (dis > dist[u])
        continue;

      for (pair<int, int> p : adj[u]) {
        int v = p.second;
        int edgewt = p.first;

        if (edgewt < mid)
          continue;

        if (dis + edgewt < dist[v]) {
          dist[v] = dis + edgewt;
          pq.push({dist[v], v});
        }
      }
    }
    if (dist[n - 1] <= k) {
      ans = mid;
      l = mid + 1;
    } else {
      r = mid - 1;
    }
  }
  return ans;
}
int main() { return 0; }

// 1. Make an adjaceny list (u : it's edges{wt,v}) without vertices that are
//    offline(use of offline vector is over) also find min and max edgewt's
//
// 2. Binary search on the answer (the path score).
//    For a candidate score = mid, check whether there exists a path
//    from 0 to n-1 such that:
//      - every edge on the path has weight >= mid, and
//      - the total path cost <= k.
//
// 3. To perform the check, run Dijkstra while ignoring every edge
//    with weight < mid. If the shortest distance to n-1 is <= k,
//    then mid is feasible.
//
// 4. If a path doesn't exist we should decrase our mid and try again.
//
// 5. If a path exists [i.e every edge in path >= mid] then we can update ans to
//     mid and check if any path exists with higher value of mid
