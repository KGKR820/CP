#include <iostream>
using namespace std;

int climbStairs(int n) {
    if (n < 4) return n;
    int prev2 = 2, prev1 = 3, curr = 0;
    for (int i = 4; i <= n; i++) {
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    return prev1;
}

int main() {
    cout << climbStairs(43);
    return 0;
}