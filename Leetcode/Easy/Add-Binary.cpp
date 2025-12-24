#include <iostream>
#include <math.h>
using namespace std;
string addBinary(string a, string b) {
 string result = "";
    int i = a.size() - 1, j = b.size() - 1, carry = 0;
    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;
        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';
        result.insert(result.begin(), (sum % 2) + '0');
        carry = sum / 2;
    }
    return result;
}

int main(){
cout << addBinary("11","1");
    return 0;
}