#include <bits/stdc++.h>
using namespace std;
vector<string> buildArray(vector<int> &target, int n) {
  int k = 1;
  vector<string> res;
  for (int i = 0; i < target.size(); i++) {
    while (k != target[i]) {
      res.push_back("Push");
      res.push_back("Pop");
      k++;
    }
    res.push_back("Push");
    k++;
  }
  return res;
}
