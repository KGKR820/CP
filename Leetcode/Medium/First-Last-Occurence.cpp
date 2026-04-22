#include <iostream>
#include <vector>
std::vector<int> searchRange(std::vector<int>& nums, int target) {
        int left =0;
        int right = static_cast<int>(nums.size())-1;
        std::vector<int> output = {-1,-1};
        while(left<=right){
            int mid = left + (right-left)/2;
            if(nums[mid] == target){
                 int i =mid;
                 int j =i;
               while(i>0 and nums[i-1] == target){
                  i--;
               }
               while(j < static_cast<int>(nums.size())-1 and nums[j+1] == target){
                  j++;
               }
            output[0] =i;
            output[1]=j;
                break;
            }
            else if(nums[mid] > target ){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
       

        return output;
        
    }
int main(){
  
    return 0;
}