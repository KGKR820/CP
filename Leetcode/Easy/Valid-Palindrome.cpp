#include <iostream>
using namespace std;
bool check(string s){
    int i=0,j = s.size()-1;
    while(i<=j){
        if(s[i] != s[j]){
            return false;
        }
        i++;
        j--;
    }
     return true;
}
bool isPalindrome(string s) {
        string temp;
        for(char c:s){
            if((c >= 'a' and c <='z') or (c>='0' and c <='9')){
              temp.push_back(c);
            }
            else if(c >= 'A' and c <='Z'){
               temp.push_back(c+32);
            }
        }
        return check(temp);
    }
int main(){
cout << isPalindrome("0P");

    return 0;
}