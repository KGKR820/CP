#include <iostream>
#include <vector>
using namespace std;
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1){
            return strs[0];
        }
        string output = "";
        for(int i=0;i<min(strs[0].size(),strs[1].size());i++){
            if(strs[0][i] == strs[1][i]){
                output.push_back(strs[0][i]);
            }
            else{
                break;
            }
        }
        for(int i=2;i<strs.size();i++){
            if(output == ""){
                return "";
            }
            else if(strs[i].substr(0,output.size()) != output){
                string temp ="";
                for(int j=0;j<output.size();j++){
                    if(strs[i][j] == output[j]){
                        temp.push_back(output[j]);
                    }
                    else{
                        break;
                    }
                }
                output = temp;
            }
        }
        return output;
    }