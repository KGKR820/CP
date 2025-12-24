#include <iostream>
#include <vector>
using namespace std;

vector<string> fizzBuzz(int n) {
        vector<string> output;
        for(int i=0;i<n;i++){
            if((i+1)%15==0){
                output.push_back("Fizz Buzz");

            }
            else if((i+1)%3==0){
                output.push_back("Fizz");
            }
            else if((i+1)%5==0){
                output.push_back("Buzz");
            }
            else{
                output.push_back(to_string(i+1));
            }
        }
        return output;
    }
int main(){

    return 0;
}