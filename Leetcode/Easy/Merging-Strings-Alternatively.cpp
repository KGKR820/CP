#include <iostream>
using namespace std;
string mergeAlternately(string word1, string word2) {
       int i=0,j=0;
       string output;
       while(i<word1.size() or j<word2.size()){
        if(i<word1.size()){
            output.push_back(word1[i]);
            i++;
        }
        if(j<word2.size()){
            output.push_back(word2[j]);
            j++;
        }
       }

       return output;
    }