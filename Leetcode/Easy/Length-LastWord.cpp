#include <iostream>
using namespace std;
int lengthOfLastWord(string s) {
        int len = s.length()-1;
        int length=0;
    while (len >= 0 && s[len] == ' ') {
        len--;
    }
    while (len >= 0 && s[len] != ' ') {
        length++;
        len--;
    }
        return length;
    }
int main(){
cout << lengthOfLastWord("a");
    return 0;
}