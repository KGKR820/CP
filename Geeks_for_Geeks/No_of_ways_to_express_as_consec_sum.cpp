#include <bits/stdc++.h>
using namespace std;
int getCount(int n) {
  if (n == 1)
    return 0;
  int a = n / 2;
  int i = 3;
  int ans = (n % 2 != 0) ? 2 : 1;
  while (i <= a) {
    if (n % i == 0) {
      ans++;
    }
    i += 2;
  }
  return ans - 1;
}
int main() { cout << getCount(1) << getCount(15) << getCount(10); }
