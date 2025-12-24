#include <iostream>
#include <unordered_set>
using namespace std;
int lengthOfLongestSubstring(string s) {
    unordered_set<char> set;
    int maxLen=0,right =0,left =0;
    while(right < s.length()){
        if(set.find(s[right]) == set.end()){
            set.insert(s[right]);
           maxLen = max(maxLen,right-left+1);
            right++;
        }
        else{
            set.erase(s[left]);
            left++;
        }
    }
    return maxLen;
    }
int main(){
 cout << lengthOfLongestSubstring("abba");
    return 0;
}