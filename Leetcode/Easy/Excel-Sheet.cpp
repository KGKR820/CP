#include <iostream>
using namespace std;

string convertToTitle(int columnNumber) {
    string temp;
    while(columnNumber > 0){
        columnNumber--; 
        char c = 'A' + (columnNumber % 26);
        temp = c + temp;
        columnNumber /= 26;
    }
    return temp;
}

int main(){
    cout << convertToTitle(28) << endl; 
    return 0;
}