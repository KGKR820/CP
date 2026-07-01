#include <bits/stdc++.h>
using namespace std;
int numberOfSubstrings(string s){
    // queue<int> a,b,c;
    // int n = s.length();
    // for(int i=0;i<n;i++){
    //     if(s[i] == 'a'){
    //         a.push(i);
    //     }else if(s[i] =='b'){
    //         b.push(i);
    //     }else {
    //         c.push(i);
    //     }
    // }
    // int ans =0;
    // int i=0;
    // while(i<n-2 and !a.empty() and !b.empty() and !c.empty()){
    //     ans += n-max({a.front(),b.front(),c.front()});
    //     if(s[i] == 'a'){
    //         a.pop();
    //     }else if(s[i] =='b'){
    //         b.pop();
    //     }else {
    //         c.pop();
    //     }
    //     i++;
    // }
    // return ans;

    // TC => O(n)
    // SC => O(1)

    vector<int> prev(3,-1);
    int ans =0;
    for(int i=0;i<s.length();i++){
        if(s[i] == 'a'){
            prev[0] = i;
        }else if(s[i] == 'b'){
            prev[1] =i;
        }else {
            prev[2] = i;
        }
        ans += min({prev[0],prev[1],prev[2]})+1;
    }
    return ans;
}
int main(){
    string s;
    cin >> s;
    cout << numberOfSubstrings(s);
    return 0;
}
