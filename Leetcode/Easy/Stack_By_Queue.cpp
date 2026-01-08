#include <queue>
using namespace std;
queue<int> obj;
class MyStack {
public:
  MyStack() { queue<int> obj; }

  void push(int x) {
    obj.push(x);
    for (int i = 0; i < obj.size() - 1; i++) {
      int y = obj.front();
      obj.pop();
      obj.push(y);
    }
  }

  int pop() {
    int x = obj.front();
    obj.pop();
    return x;
  }

  int top() { return obj.front(); }

  bool empty() { return obj.empty(); }
};
