#include <iostream>
#include <vector>
using namespace std;
int removeDupli(vector <int> &nums){
    int n = nums.size();
    int i = 0;
    for(int j = 1;j<n;j++){
        if(nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i+1;
}
int main(){
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    cout << removeDupli(nums);
    return 0;
}