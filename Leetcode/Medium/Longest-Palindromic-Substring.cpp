#include <iostream>
//! Run Time = 1017ms
// std::string longestPalindrome(std::string s) {
//     int l = 0;
//     int r = 0;
//     for (int i = 0; i < static_cast<int>(s.length()); i++) {
//         for (int j = i; j < static_cast<int>(s.length()); j++) {
//             int left = i, right = j;
//             bool isPalindrome = true;
//             while (left < right) {which bzr
//                 if (s[left] != s[right]) {
//                     isPalindrome = false;
//                     break;
//                 }
//                 left++;
//                 right--;
//             }
//             if (isPalindrome && (j - i > r - l)) {
//                 l = i;
//                 r = j;
//             }
//         }
//     }
//     return s.substr(l, r - l + 1);
// }
//? Run Time = 7ms 
//* Not Understood (MAX bro please Explain)
 std::string longestPalindrome(std::string s) {
	int sLen = s.size(), start = 0, maxLen = 1;
	int left, right;
	for (int i = 0; i < sLen;)
	{
		left = right = i;
		while (right < sLen-1 && s[right] == s[right + 1]) right++;
		i = right+1;
		while (0 <= left && right < sLen && s[left] == s[right]) { left--; right++; }
		if (right - left - 1 > maxLen) { start = left + 1; maxLen = right - left - 1; }
	}
	return s.substr(start,maxLen);
    }
int main(){
std::cout<<longestPalindrome("cbbd");
    return 0;
}