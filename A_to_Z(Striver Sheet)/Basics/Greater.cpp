#include <bits/stdc++.h>
using namespace std;
string compareIfElse(int a, int b) {
    if(a>b){
        return "greater";
    }
    else if(a<b){
        return "smaller";
    }
    else{
        return "Equal";
    }
}
int main(){
    cout << compareIfElse(4, 9);
    return 0;
}
