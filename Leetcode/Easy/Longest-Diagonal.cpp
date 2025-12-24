#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double x = 0.0;
        int area;
        for(int i=0;i<dimensions.size();i++){
            if(sqrt(pow(dimensions[i][0],2)+pow(dimensions[i][1],2)) > x){
                  x=sqrt(pow(dimensions[i][0],2)+pow(dimensions[i][1],2));
                  area = dimensions[i][0] * dimensions[i][1];
            }
            else if(sqrt(pow(dimensions[i][0],2)+pow(dimensions[i][1],2)) == x){
               if(dimensions[i][0]* dimensions[i][1] > area){
                  area = dimensions[i][0] * dimensions[i][1];
               }
            }
        }
        return area;
    }
int main(){
vector<vector<int>> dimensions = {{9,3},{8,6}};
cout << areaOfMaxDiagonal(dimensions);
    return 0;
}