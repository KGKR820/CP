#include <iostream>
#include <vector>
using namespace std;
int findClosestNumber(vector<int>& nums) {
        int output = nums[0];
        for(int i=1;i<nums.size();i++){
            if(abs(nums[i]) < abs(output)){
               output = nums[i];
            }
            else if(abs(nums[i]) == abs(output)){
                if(output < nums[i]){
                    output = nums[i];
                }
            }
        }
        return output;
    }