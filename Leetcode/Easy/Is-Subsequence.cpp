#include <iostream>
using namespace std;
bool isSubsequence(string s, string t) {
        int i=0;
        for(int j=0;j<t.length() && i<s.length();j++){
            if(t[j] == s[i]){
                i++;
            }
        }
        return i == s.length();
}