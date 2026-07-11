#include <bits/stdc++.h>
using namespace std;
long long sumAndMultiply(int n) {
  int sum = 0;
  int concat = 0;
  int i = 1;
  while (n > 0) {
    if (n % 10 == 0) {
      n = n / 10;
      continue;
    }
    sum += n % 10;
    concat += (n % 10) * i;
    i *= 10;
    n = n / 10;
  }
  return (long long)sum * (long long)concat;
}
int main() {
  int n;
  cin >> n;
  cout << sumAndMultiply(n);
}
