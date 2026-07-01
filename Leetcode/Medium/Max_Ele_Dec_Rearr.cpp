#include <bits/stdc++.h>
using namespace std;
int maximumElementAfterDecrementingAndRearranging(vector<int> &arr) {
    sort(arr.begin(),arr.end());
    int n = arr.size();
    // arr[0] = 1;
    // for(int i=1;i<n;i++){
    //     if(abs(arr[i] - arr[i-1]) > 1){
    //         arr[i] = arr[i-1]+1;
    //     }
    // }
    // return arr[n-1];
    vector<int> freq(n+1,0);
    for(int i=0;i<n;i++){
        freq[min(arr[i],n)]++;
    }
    int ans =0;
    for(int i=1;i<=n;i++){
        if(freq[i] == 0) continue;
        ans = min(i,ans+freq[i]);
    }
    return ans;
}
int main(){
    vector<int> arr = {100,1,1000};
    cout << maximumElementAfterDecrementingAndRearranging(arr);
}
