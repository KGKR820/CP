#include <iostream>
#include <string>
#include <limits.h>
int myAtoi(std::string s) {
    long long output = 0;
    int sign = 1;
    bool num = true; 

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ' && num) continue;
        else if (s[i] == '-' && num) {
            sign = -1; 
            num = false; 
        }
         else if (s[i] == '+' && num) {
            num = false; 
        }
        else if (s[i] >= '0' && s[i] <= '9') {
            num = false;
            
            output = output * 10 + (s[i] - '0');
            if(sign*output <= INT_MIN){
                return INT_MIN;
            }
            else if(sign*output >=INT_MAX){
                return INT_MAX;
            }
        } else {
            break; 
        }
    }
    
    return sign * output; 
}

int main() {
    std::cout << myAtoi("+1");
    return 0;
}
