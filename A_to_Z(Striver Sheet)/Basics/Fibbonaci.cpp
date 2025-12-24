#include <bits/stdc++.h>
using namespace std;
int fibbo(int n){
    int a = 1;
    int b = 1;
    for(int i=3;i<=n;i++){
        b = a+b;
        a = b-a;
    }
    return b;
}
int main(){
cout << fibbo(150);
    return 0;
}
