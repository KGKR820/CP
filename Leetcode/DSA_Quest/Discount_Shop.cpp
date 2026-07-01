#include <bits/stdc++.h>
using namespace std;
vector<int> finalPrices(vector<int> &prices) {
  int n = prices.size();
  for (int i = 0; i < n; i++) {
    for (int k = i + 1; k < n; k++) {
      if (prices[k] <= prices[i]) {
        prices[i] -= prices[k];
        break;
      }
    }
  }
  return prices;
}
