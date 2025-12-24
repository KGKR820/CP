#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int singleNumber(vector<int>& nums) {
        int x=0;
        for(int i:nums){
           x^=i;
        }
        return x;
        
    }
int main(){
vector<int> nums = {4,1,5,1,2,4,2};
cout << singleNumber(nums);
    return 0;
}