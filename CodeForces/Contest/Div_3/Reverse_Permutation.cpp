#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a;
  while (n--) {
    int x;
    cin >> x;
    int m = x;
    vector<int> arr;
    while (x--) {
      cin >> a;
      arr.push_back(a);
    }
    for (int i = 0; i < m; i++) {
      if (arr[i] != m - i) {
        for (int j = i; j < m; j++) {
          if (arr[j] == m - i) {
            reverse(arr.begin() + i, arr.begin() + j + 1);
            break;
          }
        }
        break;
      }
    }
    for (int i : arr) {
      cout << i << " ";
    }
    cout << endl;
  }
  return 0;
}
