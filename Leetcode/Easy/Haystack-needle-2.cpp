#include <iostream>
using namespace std;
  int strStr(string haystack, string needle) {
       for(int i=0;i< static_cast<int>(haystack.length());i++){
            int output;
            if(haystack[i] == needle[0]){
                int j=0;
                output = i;
                while(j<static_cast<int>(needle.length())){
                    if(haystack[i+j] == needle[j]){
                       j++;
                
                    }
                    else{
                        break;
                    
                    }
                    if(j == static_cast<int>(needle.length())){
                        return output;
                    }
                }

            }
        }
        return -1; 
    }
int main(){
cout << strStr("sadbutsad","sado");
    return 0;
}