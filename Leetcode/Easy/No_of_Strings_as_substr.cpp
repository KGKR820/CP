#include <bits/stdc++.h>
using namespace std;
int numOfStrings(vector<string> &patterns,string word){
    unordered_map<string,int> map;
    for(string s :patterns){
        map[s] ++;
    }
    int n2 = word.length();
    int ans =0;
    for(auto s:map){
        int n1 = s.first.length();
        for(int i=0;i<n2-n1+2;i++){
            if(word[i] == s.first[0] and word.substr(i,n1) == s.first){
                ans += s.second;
                break;
            }
        }
    }
    return ans;
}
