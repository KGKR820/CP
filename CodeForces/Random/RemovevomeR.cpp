#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> ans;
    while(n--){
        int k;
        string s;
        cin >> k >> s;
        int c =0;
        for(int i=0;i<k-1;i++){
            if(s[i] != s[i+1]) c++;
        }
        ans.push_back((c==1) ?2 :1);
    }
    for(int val:ans){
        cout << val << "\n";
    }
}
