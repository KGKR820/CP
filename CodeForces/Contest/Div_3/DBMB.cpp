#include <bits/stdc++.h>
using namespace std;
int main() {
  int a;
  cin >> a;
  int n, s, x, b, sum;
  while (a--) {
    sum = 0;
    cin >> n;
    cin >> s;
    cin >> x;
    while (n--) {
      cin >> b;
      sum += b;
    }
    if (sum > s || (s - sum) % x != 0) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
}
