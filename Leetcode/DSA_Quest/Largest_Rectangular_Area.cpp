// Hard Problem

#include <bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int> &heights) {
  // int n = heights.size();
  // vector<int> rng = heights;
  // int mx = 0;
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j < n - i; j++) {
  //     rng[j] = min(rng[j], heights[j + i]);
  //     mx = max(mx, rng[j] * (i + 1));
  //   }
  // }
  // return mx;
  //

  // Monotonic Stack Approach O(n)
  // To find max area we shall multiply
  // heights[i] * (rightsmall_i - leftsmall_i -1)
  // immediate smaller to left and right

  int n = heights.size();
  int mx = 0;
  stack<int> stk;
  for (int i = 0; i < n; i++) {

    // If ele is > heights[top()] i.e not right smaller so skip
    while (!stk.empty() and heights[i] < heights[stk.top()]) {
      int idx = stk.top();
      stk.pop();
      int l = stk.empty() ? -1 : stk.top();
      int width = i - l - 1;
      mx = max(mx, heights[idx] * width);
    }

    // Always push at last so that max area related to i can be found
    stk.push(i);
  }

  // If any left in stk without right immediate smaller
  while (!stk.empty()) {
    int idx = stk.top();
    stk.pop();
    int l = stk.empty() ? -1 : stk.top();
    mx = max(mx, heights[idx] * (n - l - 1));
  }
  return mx;
}
int main() {
  vector<int> h = {2, 1, 5, 6, 2, 3};
  cout << largestRectangleArea(h);
}
