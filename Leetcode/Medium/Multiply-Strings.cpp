#include <bits/stdc++.h>
#include <string>
using namespace std;
string multiply(string num1, string num2) {
  if (num1.size() < num2.size()) {
    multiply(num2, num1);
  }
  int n1 = num1.size();
  int n2 = num2.size();
  int mul = 1;
  int sum = 0;
  for (int i = n2 - 1; i >= 0; i--) {
    int sumin = 0;
    int mulin = 1;
    for (int j = n1 - 1; j >= 0; j--) {
      sumin += (num2[j] - '0') * (num1[i] - '0') * mulin;
      mulin *= 10;
    }
    sum += sumin * mul;
    mul *= 10;
  }
  return to_string(sum);
}
int main() { cout << multiply("12", "2"); }
