#include <iostream>
using namespace std;
int hammingWeight(int n) {
     int count=0;
     while(n){
         n=n&(n-1);
         count ++;
     }  
     return count;
    }
int main(){
cout << hammingWeight(128);
    return 0;
}