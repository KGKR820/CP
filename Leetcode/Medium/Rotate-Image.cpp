#include <stdio.h>
#include <vector>
void rotate(std::vector<std::vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=i;j<matrix[0].size();j++){
                std::swap(matrix[i][j],matrix[j][i]);
            }
        }
         for (int i = 0; i < matrix.size(); i++) {
            int left = 0, right = matrix.size() - 1;
            while (left < right) {
                std::swap(matrix[i][left], matrix[i][right]);
                left++;
                right--;
            }
        }
        }
int main(){

    return 0;
}