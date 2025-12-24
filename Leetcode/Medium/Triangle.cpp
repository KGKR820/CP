#include <vector>
using namespace std;
int minimumTotal(vector<vector<int>>& triangle) {
    if(triangle.size() == 1){
           return triangle[0][0];
       }
       int n = triangle.size();
       for(int i=n-2;i>=0;i--){
           for(int j=0;j<triangle[i].size();j++){
               triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
           }
       }
       return triangle[0][0];
}
int main(){
    return 0;
}
