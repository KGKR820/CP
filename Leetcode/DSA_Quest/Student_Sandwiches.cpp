#include <bits/stdc++.h>
using namespace std;
int countStudents(vector<int> &students, vector<int> &sandwiches) {
  int arr[2];
  arr[1] = 0;
  arr[0] = 0;
  for (int c : students) {
    arr[c]++;
  }
  for (int ele : sandwiches) {
    if (arr[ele] == 0) {
      return arr[1] + arr[0];
    } else {
      arr[ele]--;
    }
  }
  return 0;
}
