#include <bits/stdc++.h>
using namespace std;
stack<int> stk;

void push(int x) {
  if (stk.empty()) {
    stk.push(x);
    return;
  } else {
    int y = stk.top();
    stk.pop();
    push(x);
    stk.push(y);
  }
}

int pop() {
  int y = stk.top();
  stk.pop();
  return y;
}

int peek() { return stk.top(); }

bool empty() { return stk.empty(); }
