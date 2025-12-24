#include <iostream>
#include <vector>
void Help(int open,int close,std::string s,std::vector<std::string>&ans){
     if(open ==0 and close == 0){
        ans.push_back(s);
        return;
     }
     if(open > 0){
        std::string temp = s+'(';
        Help(open-1,close,temp,ans);
     }
     if(close > open){
        std::string temp = s+')';
        Help(open,close-1,temp,ans);
     }
}
 std::vector<std::string> generateParenthesis(int n) {
        std::string s="";
        std::vector<std::string> ans;
         Help(n,n,s,ans);
        return ans;
    }
int main(){

    return 0;
}