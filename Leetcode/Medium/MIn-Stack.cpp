#include <iostream>
#include <stack>
using namespace std;
class MinStack {
    private:
       stack<int> min;
       stack <int> org;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(min.empty() or val <= min.top()){
            min.push(val);
        }
        org.push(val);
        
    }
    
    void pop() {
        if( min.top() == org.top()){
            min.pop();
        }
        org.pop();
    }
    
    int top() {
        return org.top();
    }
    
    int getMin() {
        return min.top();
    }
};
int main(){

    return 0;
}