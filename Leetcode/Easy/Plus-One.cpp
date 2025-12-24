#include <iostream>
#include <vector>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
       int len = digits.size()-1;
       for(int i = len;i>=0;i--){
        if(digits[i] < 9){
          digits[i]++;
          return digits;
        }
        digits[i] =0;
       }
       digits.insert(digits.begin(),1);
       return digits;
    }
int main(){
    vector <int> arr = {4,3,2,1};
  vector <int> brr = plusOne(arr);
  for(int a:brr){
    cout << a << " ";
  }
    return 0;
}