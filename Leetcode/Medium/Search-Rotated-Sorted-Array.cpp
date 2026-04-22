#include <iostream>
#include <vector>
    int search(std::vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            else if(nums[low] <nums[mid]){
                if(target >= nums[low] and target < nums[mid]){
                    high = mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(nums[high] <= target and target > nums[mid]){
                    low = mid+1;
                }
                else{
                    high= mid -1;
                }
            }
        }

        return -1;
    }
int main(){

    return 0;
}