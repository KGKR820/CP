#include <bits/stdc++.h>
using namespace std;
int main() {
  int x;
  cin >> x;
  while (x--) {
    int n;
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; i++) {
      int temp;
      cin >> temp;
      a.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
      int temp;
      cin >> temp;
      b.push_back(temp);
    }
    long long score = 0;
    sort(a.begin(), a.end());
    int diff = n - b[0];
    int j = 1;
    while (diff >= 0) {
      long long sc = (long long)a[diff] * j;

      if (sc > score) {
        score = sc;
      }

      if (j < n) {
        diff -= b[j];
        j++;
      } else {
        break;
      }
    }
    cout << score << endl;
  }
  return 0;
}
