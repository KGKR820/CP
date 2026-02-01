#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  // Sort to find consecutive sequences easily
  sort(a.begin(), a.end());

  // Remove duplicates as they don't extend the length of the MEX
  a.erase(unique(a.begin(), a.end()), a.end());

  int max_len = 0;
  int current_len = 0;

  for (int i = 0; i < a.size(); ++i) {
    if (i == 0) {
      // First element starts a sequence
      current_len = 1;
    } else {
      if (a[i] == a[i - 1] + 1) {
        // Consecutive number, extend sequence
        current_len++;
      } else {
        // Gap detected, sequence breaks
        max_len = max(max_len, current_len);
        current_len = 1;
      }
    }
  }
  // Check the last sequence
  max_len = max(max_len, current_len);

  cout << max_len << endl;
}

int main() {
  // Fast I/O
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
