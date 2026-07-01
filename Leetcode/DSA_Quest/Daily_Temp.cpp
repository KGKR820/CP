#include <bits/stdc++.h>
using namespace std;
vector<int> dailyTemperatures(vector<int> &temperatures) {
  stack<int> stk;
  for (int i = 0; i < temperatures.size(); i++) {
    while (!stk.empty() and temperatures[i] > temperatures[stk.top()]) {
      temperatures[stk.top()] = i - stk.top();
      stk.pop();
    }
    stk.push(i);
  }
  while (!stk.empty()) {
    temperatures[stk.top()] = 0;
    stk.pop();
  }
  return temperatures;
}
int main() {}
