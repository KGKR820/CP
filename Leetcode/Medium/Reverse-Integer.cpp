#include <iostream>
#include <limits.h>
int reverse(int x){ 
        if(x == INT_MAX || x == INT_MIN)
            return 0;
        int res=0;
        while(x){
            if(INT_MAX/10 < res || res < INT_MIN/10)
                return 0;
            res = res*10 + x%10;
            x /= 10;
        }
        return res;
}
int main(){
std:: cout << reverse(-2147483648);
    return 0;
}