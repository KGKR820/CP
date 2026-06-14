#include <bits/stdc++.h>
using namespace std;
vector<string> findRepeatedDnaSequences(string s) {
  if (s.length() <= 10) {
    return {};
  }
  vector<string> res;
  unordered_set<string> set;
  unordered_set<string> chk;

  for (int i = 0; i < s.length() - 10; i++) {
    string temp = s.substr(i, 10);
    if (set.find(temp) == set.end()) {
      set.insert(temp);
    } else {
      if (chk.find(temp) == chk.end()) {
        chk.insert(temp);
        res.push_back(temp);
      }
    }
  }
  return res;
}
int main() {
  for (auto i : findRepeatedDnaSequences("AAAAAAAAAAAAA")) {
    cout << i << endl;
  }
}
