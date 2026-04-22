#include <iostream>
std::string intToRoman(int num) {
    std::string output="";
    while(num > 0){
        if(num >= 1000){
            num -=1000;
            output.push_back('M');
        }
        else if(num >= 500){
            if(num >= 900){
              num-=900;
              output.push_back('C');
              output.push_back('M');
            }
            else{
                output.push_back('D');
                num-=500;
            }
        }
        else if(num >= 100){
            if(num >= 400){
              num-=400;
              output.push_back('C');
              output.push_back('D');
            }
            else{
                output.push_back('C');
                num-=100;
            }
        }
        else if(num >= 50){
            if(num >= 90){
              num-=90;
              output.push_back('X');
              output.push_back('C');
            }
            else{
                output.push_back('L');
                num-=50;
            }
        }
        else if(num >= 10){
            if(num >= 40){
              num-=40;
              output.push_back('X');
              output.push_back('L');
            }
            else{
                output.push_back('X');
                num-=10;
            }
        }
        else if(num >= 5){
            if(num >= 9){
              num-=9;
              output.push_back('I');
              output.push_back('X');
            }
            else{
                output.push_back('V');
                num-=5;
            }
        }
        else if(num >= 1){
            if(num >= 4){
              num-=4;
              output.push_back('I');
              output.push_back('V');
            }
            else{
                output.push_back('I');
                num-=1;
            }
        }
    }
    return output;
}
int main(){
std::cout << intToRoman(3749);
    return 0;
}