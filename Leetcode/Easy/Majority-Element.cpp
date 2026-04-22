#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int majorityElement(vector<int>& nums) {
        unordered_map <int,int> hash;
       int n = nums.size();
       for(int num:nums){
        hash[num]++;
        if(hash[num] > n/2){
            return num;
        }

       }
       return -1;
    }
int main(){

    return 0;
}