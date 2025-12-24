#include <iostream>
#include <vector>
using namespace std;
    vector<string> summaryRanges(vector<int>& nums) {
        int i=0;
        vector<string> output;
        for(int j=1;j<nums.size();j++){
            if((long)(j-i) != long(nums[j])-long(nums[i])){
                if(i!=j-1){
                output.push_back(to_string(nums[i])+"->"+ to_string(nums[j-1]));
                }
                else{
                output.push_back(to_string(nums[i]));
                }
                i=j;
            }
        }
        if(i < nums.size()){
            if(i!=nums.size()-1){
                output.push_back(to_string(nums[i])+"->"+ to_string(nums[nums.size()-1]));
                }
                else{
                output.push_back(to_string(nums[i]));
                }
        }
        return output;
    }