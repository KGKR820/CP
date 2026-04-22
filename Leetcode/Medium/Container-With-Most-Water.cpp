#include <iostream>
#include <vector>
#include <limits.h>
int maxArea(std::vector<int>& height) {
    int left=0;
    int right= height.size()-1;
    int max =0;
    while(left<right){
       int curr = (right-left)*(std::min(height[left],height[right]));
        max = std::max(curr,max);
       if(height[left]<height[right]){
        left++;
       }
       else{
        right--;
       }
    }
    return max;
    }
int main(){
std::vector <int> height ={1,8,6,2,5,4,8,3,7};
std::cout << maxArea(height);
    return 0;
}