#include <iostream>
using namespace std;
#include <math.h>
int titleToNumber(string columnTitle) {
    int output=0;
    int j = columnTitle.length()-1;
    for(int i=0;i<=static_cast<int>(columnTitle.length()-1);i++){
        output +=(columnTitle[i] - 64)*(pow(26,j));
        j--;
    }
        return output;
    }
int main(){
cout << titleToNumber("ZY");
    return 0;
}