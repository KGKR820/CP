#include <iostream>
#include <vector>
#include <array>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector <int> arr(n);
        int curr=1;
        for(int i=0;i<n;i++){
            arr[i] =1;
            arr[i]*=curr;
            curr*=nums[i];
        }
        curr=1;
        for(int i=n-1;i>=0;i--){
            arr[i]*=curr;
            curr*=nums[i];
        }
        return arr;
    }