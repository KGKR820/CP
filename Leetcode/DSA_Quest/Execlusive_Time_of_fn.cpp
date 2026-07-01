#include <bits/stdc++.h>
using namespace std;
vector<int> exclusiveTime(int n, vector<string> &logs) {
  stack<int> stk;
  vector<int> res(n, 0);
  int k = 0;
  for (string s : logs) {
    const int u1 = s.find_first_of(':');
    const int u2 = s.find_last_of(':');
    int id = stoi(s.substr(0, u1));
    int label = s[u1 + 1];
    int ts = stoi(s.substr(u2 + 1));
    if (label == 's') {
      if (!stk.empty()) {
        res[stk.top()] += (ts - k);
      }
      stk.push(id);
      k = ts;

    } else {
      res[stk.top()] += ts - k + 1;
      k = ts + 1;
      stk.pop();
    }
  }
  return res;
}
