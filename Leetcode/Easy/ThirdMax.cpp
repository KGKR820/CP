#include <vector>
#include <climits>
using namespace std;
int thirdMax(vector<int>& nums) {
            int size = nums.size();
    
            long first = LONG_MIN;
            long second = LONG_MIN;
            long third = LONG_MIN;
            for(auto it: nums){
                if(first == it || second == it || third == it) continue;
    
                if(it > first){
                    third = second;
                    second = first;
                    first = it;
                }
                else if(it > second){
                    third = second;
                    second = it;     
                }
                else if(it > third){
                    third = it;
                }
            }
            return (third==LONG_MIN)?first:third;
    }