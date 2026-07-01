#include <bits/stdc++.h>
using namespace std;
char processStr(string s, long long k) {
  long long len = 0;
  for (char c : s) {
    switch (c) {
    case '*':
      len = max(0LL, len - 1);
      break;
    case '#':
      len *= 2;
      break;
    default:
      if (c != '%') {
        len++;
      }
    }
  }
  if (len <= k) {
    return '.';
  }
  for (int i = s.length() - 1; i >= 0; i--) {
    switch (s[i]) {
    case '*':
      len++;
      break;
    case '#':
      // Ex: abc ,do # => abcabc
      // k=4,len = 6 => ans : b
      // As k >= len/2 the other half can be eliminated
      // if < it is already not considered
      // len becomes 3 and k = 4%3 = 1 (ans : b)

      len = len / 2;
      k = k % len;
      break;
    case '%':
      // Ex: abcd k=2 (ans : c) ,do %(rev)
      // dcba k=4-2-1 => 1 (ans : c)

      k = len - k - 1;
      break;
    default:
      if (k == len - 1) {
        return s[i];
      }
      len--;
    }
  }
  return '.';
}
int main() {}
