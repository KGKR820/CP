#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> output;
    unordered_set<int> set;
     for(int i=0;i<nums1.size();i++){
         if(set.find(nums1[i]) == set.end()){
             set.insert(nums1[i]);
         }
     }
     sort(nums2.begin(),nums2.end());
     for(int i=0;i<nums2.size();i++){
         if(set.find(nums2[i]) != set.end()){
             if(output.back() != nums2[i]){
                 output.push_back(nums2[i]);
             }
         }
     }
     return output;
    }
