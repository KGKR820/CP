#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
int maxNumberOfBalloons(string text) {
  unordered_map<char, int> map;
  map.insert({{'b', 0}, {'a', 0}, {'l', 0}, {'o', 0}, {'n', 0}});
  for (char c : text) {
    if (map.find(c) != map.end()) {
      map[c]++;
    }
  }
  int output = min({map['b'], map['a'], map['l'], map['o'], map['n']});

  return output;
}
int main() { cout << maxNumberOfBalloons("loonbalxballpoon"); }
