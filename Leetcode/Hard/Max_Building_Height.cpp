#include <bits/stdc++.h>
using namespace std;
int maxBuilding(int n, vector<vector<int>> &restrictions) {
  restrictions.push_back({1, 0}); // Building 1 must have height 0.

  sort(restrictions.begin(), restrictions.end());

  // If building n has no explicit restriction,
  // its maximum possible height is n-1.
  if (restrictions.back()[0] != n)
    restrictions.push_back({n, n - 1});

  int m = restrictions.size();

  // Propagate constraints from left to right.
  // A restricted building cannot exceed
  // previous restricted height + distance.
  for (int i = 1; i < m; i++) {
    int dist = restrictions[i][0] - restrictions[i - 1][0];
    restrictions[i][1] = min(restrictions[i][1], restrictions[i - 1][1] + dist);
  }

  // Propagate constraints from right to left.
  // A restricted building cannot exceed
  // next restricted height + distance.
  for (int i = m - 2; i >= 0; i--) {
    int dist = restrictions[i + 1][0] - restrictions[i][0];
    restrictions[i][1] = min(restrictions[i][1], restrictions[i + 1][1] + dist);
  }

  // Now all restrictions are mutually consistent.

  long long ans = 0;

  for (int i = 1; i < m; i++) {
    long long x1 = restrictions[i - 1][0];
    long long h1 = restrictions[i - 1][1];

    long long x2 = restrictions[i][0];
    long long h2 = restrictions[i][1];

    long long d = x2 - x1;

    // Maximum peak achievable between these
    // two restricted buildings.
    ans = max(ans, (h1 + h2 + d) / 2);
  }

  return (int)ans;
}
