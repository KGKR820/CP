#include <bits/stdc++.h>
using namespace std;
int evalRPN(vector<string> &tokens) {
  stack<int> stk;
  for (string s : tokens) {
    if (s == "+" or s == "-" or s == "*" or s == "/") {
      int val2 = stk.top();
      stk.pop();
      int val1 = stk.top();
      stk.pop();
      switch (s[0]) {
      case '+':
        stk.push(val1 + val2);
        break;
      case '-':
        stk.push(val1 - val2);
        break;
      case '*':
        stk.push(val1 * val2);
        break;
      case '/':
        stk.push(val1 / val2);
        break;
      default:
        stk.push(s[0]);
      }
    } else {
      stk.push(stoi(s));
    }
  }
  return stk.top();
}
