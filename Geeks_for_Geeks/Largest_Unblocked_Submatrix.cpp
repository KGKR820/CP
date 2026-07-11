#include <bits/stdc++.h>
using namespace std;
int largestArea(int n, int m, vector<vector<int>> &enemy) {
  int k = enemy.size();

  // Edge Case
  if (k == 0)
    return n * m;

  vector<int> rows(k);
  vector<int> cols(k);

  for (int i = 0; i < k; i++) {
    rows[i] = enemy[i][0];
    cols[i] = enemy[i][1];
  }

  sort(rows.begin(), rows.end());
  sort(cols.begin(), cols.end());

  // First Block
  int diffR = rows[0] - 1;
  int diffC = cols[0] - 1;

  for (int i = 1; i < k; i++) {
    // Middle Blocks
    diffR = max(diffR, rows[i] - rows[i - 1] - 1);
    diffC = max(diffC, cols[i] - cols[i - 1] - 1);
  }

  // Last Block
  diffR = max(diffR, n - rows.back());
  diffC = max(diffC, m - cols.back());

  return diffR * diffC;

  // T.C => O(klogk)
  // S.c => O(k)
}
int main() { return 0; }
