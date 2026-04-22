#include <iostream>
#include <vector>
using namespace std;
    vector<int> getRow(int rowIndex){
      vector<int> output;
      long val =1;
      for(int i=0;i<rowIndex;i++){
        output.push_back((int) val);
        val = val*(rowIndex-i)/(i+1);
      }
      return output;
    }
int main(){
    
    return 0;
}