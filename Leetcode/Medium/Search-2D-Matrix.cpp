#include <iostream>
#include <vector>
 bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
     int l=0;
     int r=static_cast<int>(matrix.size())-1;
     int s = static_cast<int>(matrix[0].size())-1;
     while(l<=r){
        int mid = (r+l)/2;
        if(matrix[mid][0] <= target && matrix[mid][s] >= target ){
           int i = 0;
           int j = s;
           while(i<=j){
            int m = (i+j)/2;
            if(matrix[mid][m] == target){
                return true;
            }
            else if(target > matrix[mid][m]){
                i = m+1;
            }
            else{
                j = m-1;
            }
           }
           return false;
        }
        else if(matrix[mid][0] <= target && matrix[mid][s] <= target){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
     }
     return false;
    }
int main(){
std::vector<std::vector<int>> matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
std::cout << searchMatrix(matrix,13) << std::endl;
    return 0;
}