#include <bits/stdc++.h>
using namespace std;
int max_ice_cream(vector<int> &costs, int coins) {
  int mx = *max_element(costs.begin(), costs.end());
  vector<int> freq(mx + 1, 0);
  for (int i = 0; i < costs.size(); i++) {
    freq[costs[i]]++;
  }
  int output = 0;
  for (int i = 1; i < mx + 1; i++) {
    if (freq[i] == 0)
      continue;
    else if (freq[i] <= coins / i) {
      coins -= freq[i] * i;
      output += freq[i];
    } else if (coins != 0) {
      output += min(freq[i], coins / i);
      break;
    } else {
      break;
    }
  }
  return output;
}
int main() {}
