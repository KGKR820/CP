#include <iostream>
#include <vector>
#include <algorithm>
std::vector<std::vector<int>> fourSum(std::vector<int>& nums, int target) {
    std::vector<std::vector<int>> output;
    int n = static_cast<int>(nums.size());
    std::sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue; 
        for (int j = i + 1; j < n - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue; 
            int left = j + 1;
            int right = n - 1;
            while (left < right) {
                long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[left] + nums[right];
                if (sum == target) {
                    output.push_back({nums[i], nums[j], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }
    return output;
}
int main(){
std::vector<int> nums = {1,0,-1,0,-2,2};
std::vector<std::vector<int>> output = fourSum(nums,0);

    return 0;
}