#include <bits/stdc++.h>
using namespace std;

string countAndSay(int n) {
  if (n == 1) {
    return "1";
  } else if (n == 2) {
    return "11";
  }

  string temp = countAndSay(n - 1);
  string output;
  int j = 0;

  for (int i = 1; i < temp.length(); i++) {
    if (temp[i] != temp[i - 1]) {
      output += to_string(i - j);
      output.push_back(temp[i - 1]);
      j = i;
    }
  }

  output += to_string(temp.length() - j);
  output.push_back(temp.back());

  return output;
}

int main() {
  cout << countAndSay(4);
  return 0;
}
