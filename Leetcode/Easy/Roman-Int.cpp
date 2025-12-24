#include <iostream>
#include <unordered_map>
using namespace std;
int romanToInt(string s) {

    // ------- More Time -------- //

//        unordered_map<char, int> roman = {
//             {'I', 1},
//             {'V', 5},
//             {'X', 10},
//             {'L', 50},
//             {'C', 100},
//             {'D', 500},
//             {'M', 1000}
//         };
        
//         int sum = 0;
// // IIM is not how you write that you will always write MII because the smaller number comes before the larger number only in case subtraction time
//         for(int i = 0; i < s.length(); i++){
//             if(i < s.length() - 1 && roman[s[i]] < roman[s[i+1]]){
//                 sum -= roman[s[i]];
//             } else {
//                 sum += roman[s[i]];
//             }
//         }
        
//         return sum;

        /// ----- Less Time -------////
        int sum = 0;
        for(int i = 0; i < s.length(); i++){
            switch (s[i]){
                case 'I':
                    sum += 1;
                    break;
                case 'V':
                    if(i > 0 && s[i-1] == 'I'){
                        sum += 3;
                    }
                    else{
                        sum += 5;
                    }
                    break;
                case 'X':
                    if(i > 0 && s[i-1] == 'I'){
                        sum += 8;
                    }
                    else{
                        sum += 10;
                    }
                    break;
                case 'L':
                    if(i > 0 && s[i-1] == 'X'){
                        sum += 30;
                    }
                    else{
                        sum += 50;
                    }
                    break;
                case 'C':
                    if(i > 0 && s[i-1] == 'X'){
                        sum += 80;
                    }
                    else{
                        sum += 100;
                    }
                    break;
                case 'D':
                    if(i > 0 && s[i-1] == 'C'){
                        sum += 300;
                    }
                    else{
                        sum += 500;
                    }
                    break;
                case 'M':
                    if(i > 0 && s[i-1] == 'C'){
                        sum += 800;
                    }
                    else{
                        sum += 1000;
                    }
                    break;
            }
        }
        return sum;
    }