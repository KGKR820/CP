#include <stdio.h>
#include <vector>
#include <unordered_set>
void Help(std::vector<int>& arr,int target,std::vector<int>& temp,int num,std::vector<std::vector<int>> &output){
   if(target<0) return ;
   if(target ==0){
    output.push_back(temp);
    return ;
   }
   for(int i=num;i<arr.size();i++){
    if(arr[i]<target){
        temp.push_back(arr[i]);
        Help(arr,target-arr[i],temp,i,output);
        temp.pop_back();
    }

   }
}
std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target) {
        std::vector<std::vector<int>> output;
        std::vector<int> temp;
        Help(candidates,target,temp,0,output);
    }
int main(){

    return 0;
}