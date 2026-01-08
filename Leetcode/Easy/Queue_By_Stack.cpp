#include <stack>
using namespace std;
stack<int> obj;
void push(int x) {
  stack<int> obj2;
  while (!obj.empty()) {
    obj2.push(obj.top());
    obj.pop();
  }
  obj.push(x);
  while (!obj2.empty()) {
    obj.push(obj2.top());
    obj2.pop();
  }
}

int pop() {
  int x = obj.top();
  obj.pop();
  return x;
}

int peek() {
  int x = obj.top();
  return x;
}

bool empty() { return obj.empty(); }
