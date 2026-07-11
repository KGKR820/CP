#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    while(n--){
        int x,y;
        cin >> x;
        cin >> y;
        arr.push_back(x%y);
    }
    for(int val:arr){
        if(val == 0) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}
