#include <iostream>
#include <vector>
using namespace std;
double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        double max = 0.0;
        double org =0.0;
        for(int i=0;i<classes.size();i++){
            org+= (static_cast<double>(classes[i][0])/static_cast<double>(classes[i][1]));
            
        }
      
        return (org + max)/classes.size();
    }
