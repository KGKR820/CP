#include <iostream>
#include <vector>
using namespace std;
    int maxProfit(vector<int>& prices) {
      int output =0;
      int buy = prices[0];
      for(int i=1;i<prices.size();i++){
        if(buy > prices[i]){
          buy = prices[i];
        }
        else if(output < prices[i] - buy){
          output = prices[i] - buy;
        }
      }
        return output;
    }