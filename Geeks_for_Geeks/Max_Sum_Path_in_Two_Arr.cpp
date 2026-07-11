#include <bits/stdc++.h>
using namespace std;
int maxPathSum(vector<int> &a, vector<int> &b) {
  int i = 0, j = 0;
  int n1 = a.size();
  int n2 = b.size();

  int segA = 0, segB = 0;
  int ans = 0;

  while (i < n1 && j < n2) {
    if (a[i] < b[j]) {
      segA += a[i++];
    } else if (a[i] > b[j]) {
      segB += b[j++];
    } else {
      // Here we are adding max of sum of ele b/w old cmn and new cmn from both
      // a and b with the cmn ele
      ans += max(segA, segB) + a[i];
      segA = 0;
      segB = 0;
      i++;
      j++;
    }
  }

  while (i < n1)
    segA += a[i++];

  while (j < n2)
    segB += b[j++];

  ans += max(segA, segB);

  return ans;
}
