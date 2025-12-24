#include <iostream>
#include <vector>
using namespace std;
int removeElement(vector <int> &nums,int val){
     int i=0;
     for(int j=0;j<nums.size();j++){
        if(nums[i] == val and nums[j] != val){
            std::swap(nums[i], nums[j]);
            i++;
        }
        else if(nums[i] != val){
            i++;
        }
     }
     return i;
}
int main(){
vector <int> nums = {3,2,2,3};
int val = 3;
cout << removeElement(nums,val);
    return 0;
}