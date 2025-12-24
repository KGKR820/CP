#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;
bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
          return false;
        }
        unordered_map <char,char> hash;
        unordered_set <char> set;
        for(int i=0;i<s.size();i++){
            if(hash.find(s[i]) == hash.end()){
               if(set.find(t[i]) != set.end()){
                    return false;
               }
               hash[s[i]] = t[i];
               set.insert(t[i]);
            }
            else{
                if(hash[s[i]] != t[i]){
                    return false;
                }
            }
        }
    }
int main(){

    return 0;
}
