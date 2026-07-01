#include <bits/stdc++.h>
using namespace std;
int timeRequiredToBuy(vector<int> &tickets, int k) {
  int ans = 0;
  int n = tickets.size();
  int i = 0;
  while (tickets[k] != 0) {
    if (tickets[i % n] != 0) {
      tickets[i % n]--;
      ans++;
    }
    i++;
  }
  return ans;
}
