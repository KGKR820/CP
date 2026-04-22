#include<iostream>
#include <unordered_map>
#include <vector>
using namespace std;
vector<int> twosum(vector<int> arr,int target){
    unordered_map <int,int> set;
    for(int i=0;i<arr.size();i++){
        int compliment = target - arr[i];
        if(set.count(compliment)){
            return {set[compliment],i};

        }
        set[arr[i]] = i;
    }
    return {};
}
int main(){
vector<int> arr = twosum({2,4,9,5},6);
for(int arr :arr){
    cout  << arr << " ";
}
    return 0;
}