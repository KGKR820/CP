#include <bits/stdc++.h>
#include <vector>
using namespace std;
vector<int> grayCode(int n) {
    vector<int>ans;
    for(int i=0 ;i< 1<<n ;i++){
        ans.push_back(i^(i>>1));
    }
    return ans ;
}
// void toggle(int &num,int pos){
//     num = num ^ (1 << pos);
// }
int main(){
    int n;
    cin >> n;
   vector<int>out =  grayCode(n);
   for(int i:out){
       cout << i << " ";
   }
    return 0;
}
