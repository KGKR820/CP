#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int size;
    cin >> size;
    int mx = INT_MIN;
    int x;
    for (int i = 0; i < size; i++) {
      cin >> x;
      mx = max(x, mx);
    }
    cout << size * mx << endl;
  }
  return 0;
}
