#include <bits/stdc++.h>
using namespace std;
string processStr(string s) {
  string res = "";
  for (char c : s) {
    switch (c) {
    case '*':
      if (!res.empty()) {
        res.pop_back();
      }
      break;
    case '#':
      res.append(res);
      break;
    case '%':
      reverse(res.begin(), res.end());
      break;
    default:
      res.push_back(c);
    }
  }
  return res;
}
int main() { cout << processStr("a#b%*"); }
