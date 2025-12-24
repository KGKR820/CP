#include <bits/stdc++.h>
using namespace std;
int dataTypes(string type) {
  if (type == "long") {
    return 8;
  } else if (type == "int") {
    return 4;
  } else if (type == "char") {
    return 1;
  } else if (type == "float") {
    return 4;
  } else if (type == "double") {
    return 8;
  }
  return 0;
}
int main() {
  cout << dataTypes("long");
  return 0;
}
