#include <iostream>
using namespace std;
bool palindrome(int x){
    if(x < 0){
        return false;
    }
    else{
        int n =x;
        int rev =0;
      while(n > 0){
        rev = rev*10 + n%10;
        n = n/10;
      }   
     return (rev ==x);
    }
}
int main(){
cout << palindrome(121);
    return 0;
}