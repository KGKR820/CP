#include <iostream>
#include <math.h>
#include <limits.h>
double myPow(double x, int n) {
       if(n==0){
        return 1;
       }
       else if(n<0){
        if(n== INT_MIN){
            return (1.0/x)*myPow(1.0/x,abs(n+1));
        }
        return myPow(1.0/x,abs(n));
       }
       else{
        return pow(x,n);
       }
    }
int main(){
std::cout << myPow(2,-20000);
    return 0;
}