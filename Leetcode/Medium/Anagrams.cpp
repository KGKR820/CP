#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> output;
        vector<string> temp = strs;
        for(string i:strs){
            sort(i.begin(),i.end());
        }
        sort(temp.begin(),temp.end());

    }
int main(){

    return 0;
}