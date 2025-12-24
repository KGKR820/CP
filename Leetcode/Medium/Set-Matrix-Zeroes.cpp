#include <iostream>
#include <vector>
void setZeroes(std::vector<std::vector<int>>& matrix) {
    std::vector<std::vector<int>> jesus;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                    if(matrix[i][j] == 0){
                        jesus.push_back({i,j});
                    }
            }
        }
        for(int i=0;i<jesus.size();i++){
            int j = jesus[i][0];
            int k = jesus[i][1];
            for(int x=0;x<n;x++){
                matrix[j][x] =0;
            }
            for(int y=0;y<m;y++){
                matrix[y][k] =0;
            }
        }
    }
    
int main(){

 return 0;
}