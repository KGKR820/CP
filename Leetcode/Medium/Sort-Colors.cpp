#include <iostream>
#include <vector>
using namespace std;
void sortColors(vector<int>& nums) {
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i] > nums[i+1]){
        //         for(int j=i+1;j>0;j--){
        //             if(nums[j] < nums[j-1]){
        //                 swap(nums[j],nums[j-1]);
        //             }
        //         }
        //     }
        // }
        int w=0;int r=0;int b=0;
        for(int i=0;i<nums.size();i++){
             switch(nums[i]){
                case 0: r++;break;
                case 1: w++;break;
                case 2: b++;break;
             }
        }
        int i=0;
        while(r--) nums[i++] = 0;
        while(w--) nums[i++] =1;
        while(b--) nums[i++] = 2;
    }
int main(){
    return 0;
}