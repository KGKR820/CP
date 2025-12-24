#include <iostream>
#include <vector>
#include <algorithm>
std::vector<std::vector<int>> threeSum(std::vector<int>& arr) {
        std::vector <std::vector<int>> res;
      int n = arr.size();
       std::sort(arr.begin(), arr.end());
      for(int i=0;i<n-2;i++){
        if (i > 0 && arr[i] == arr[i - 1]) continue;
           int left = i+1;
           int right = n-1;
           int tar = 0 - arr[i];
           while(left < right){
            if(arr[left] + arr[right] == tar){
                res.push_back({arr[i],arr[left],arr[right]});
                while (left < right && arr[left] == arr[left + 1]) left++;
                while (left < right && arr[right] == arr[right - 1]) right--;
                left++;
                right--;
            }
            else if(arr[left] + arr[right] > tar){
                right--;
            }
            else{
              left++;
            }
           }
      }
      return res;
}
int main(){
std:: vector<int> arr = {-3, -1, 0, 1, 2};
std::vector<std::vector<int>> ans = threeSum(arr);
    for (int i = 0; i < ans.size(); i++)
        std::cout << ans[i][0] << " " << ans[i][1] << " " <<  ans[i][2]<< std::endl;
    return 0;
}