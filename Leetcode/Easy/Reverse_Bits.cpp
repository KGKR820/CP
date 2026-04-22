#include <bits/stdc++.h>
using namespace std;
int reverseBits(int n) {
    int res = 0;
    for(int i=0;i<32;i++){
        res = res << 1 | (n & 1);
       n =  n >> 1;
    }
    return res;
}
int main(){
cout << reverseBits(43261596);
    return 0;
}
