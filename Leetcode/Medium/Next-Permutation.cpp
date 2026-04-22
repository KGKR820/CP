#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void nextPermutation(std::vector<int>& nums) {
    int n = nums.size();
        if (n <= 1) {
            return;
        }
        int i = n - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }
        if (i >= 0) {
            int j = n - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            std::swap(nums[i], nums[j]);
        }
        std::reverse(nums.begin() + i + 1, nums.end());
    }

int main(){
std::vector <int> arr = {1,2,3};
nextPermutation(arr);
for(int i:arr){
    std::cout << i << " ";
}
    return 0;
}
