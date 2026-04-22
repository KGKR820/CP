#include <bits/stdc++.h>
int findWays(int n) {
  if (n % 2 != 0) {
    return 0;
  }
  int a = 1;
  int b = 1;
  for (int i = n; i > n / 2; i--) {
    a *= i;
  }
  for (int i = 1; i <= n / 2; i++) {
    b *= i;
  }
  return (2 * a) / ((n + 2) * b);
}
