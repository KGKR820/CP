#include <bits/stdc++.h>
using namespace std;
int main() {
  int tt;
  cin >> tt;
  vector<int> ans;
  while (tt--) {
    int x;
    cin >> x;
    int y = 1;
    while (x > 0) {
      y *= 10;
      x /= 10;
    }
    ans.push_back(y + 1);
  }
  for (int val : ans) {
    cout << val << "\n";
  }
  return 0;
}
