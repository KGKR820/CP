#include <iostream>
#include <math.h>
#include <unordered_set>
using namespace std;

   bool isHappy(int n) {
      if(n==1 || n==7) return true;
        else if(n<10) return false;
        else{
            int sum=0;
            while(n>0){
                int temp=n%10;
                sum+= temp*temp;
                n=n/10;
            }
            return isHappy(sum);
        }
   }
int main(){
cout << isHappy(2);
    return 0;
}