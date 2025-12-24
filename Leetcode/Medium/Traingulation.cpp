#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
int minScoreTriangulation(vector<int>& values) {
        int n = values.size();
        int low = INT_MAX;
   

    }
int help(vector<int> nums,int &sum){
    
     for(int i=0;i<nums.size()-2;i++){
        sum = sum + nums[i]*nums[i+1]*nums[i+2];
        nums.erase(nums.begin() + i + 1);
        help(nums,sum);

    }
    
}
int main(){

    return 0;
}