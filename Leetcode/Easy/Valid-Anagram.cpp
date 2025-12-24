#include <iostream>
#include <vector>
using namespace std;
bool isAnagram(string s, string t) {
      
    if(s.length() != t.length()){
        return false;
    }
    else{
        vector <int> freq(26,0);
        for(int i=0;i<s.length();i++){
            freq[s[i] - 'a']++;
            freq[t[i] -'a']--;

        }
        for(int i=0;i<26;i++){
            if(freq[i] != 0){
                return false;
            }
        }
    }
    return true;
    }
int main(){
cout << isAnagram("rat","cat");
    return 0;
}