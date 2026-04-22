#include <bits/stdc++.h>
using namespace std;
double areaSwitchCase(int ch, vector<double> a) {
    switch(ch){
        case 1:
            return (double)(3.14*a[0]*a[0]);
            break;
        case 2:
            return (double)(a[0]*a[1]);
            break;
        default:
            cout << "error";
    }
    return -1;
}
int main(){
   cout <<  areaSwitchCase(2, {3,2});
    return 0;
}
