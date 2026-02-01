#include <bits/stdc++.h>
using namespace std;
int main() {
  int in;
  cin >> in;
  vector<int> input;
  for (int i = 0; i < in; i++) {
    int temp;
    cin >> temp;
    input.push_back(temp);
  }
  for (int i : input) {
    for (int j = 0; j < i; j++) {
      cout << j + 1 << " ";
    }
    cout << "\n";
  }
  return 0;
}
