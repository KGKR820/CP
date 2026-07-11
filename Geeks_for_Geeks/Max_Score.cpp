#include <bits/stdc++.h>
using namespace std;
int maxCharGap(string &s) {
  int mx = -1;
  vector<int> apl(26, -1);
  for (int i = 0; i < s.length(); i++) {
    if (apl[s[i] - 97] == -1)
      apl[s[i] - 97] = i;
    else {
      mx = max(mx, i - apl[s[i] - 97] - 1);
    }
  }
  return mx;
}
