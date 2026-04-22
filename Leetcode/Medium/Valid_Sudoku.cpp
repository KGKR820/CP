#include <bits/stdc++.h>
using namespace std;
bool isValidSudoku(vector<vector<char>> &board) {
  for (int i = 0; i < 9; i++) {
    set<char> hash1;
    set<char> hash2;
    for (int j = 0; j < 9; j++) {
      if (board[i][j] != '.') {
        if (hash1.find(board[i][j]) != hash1.end()) {
          return false;
        }
        hash1.insert(board[i][j]);
      }
      if (board[j][i] != '.') {
        if (hash2.find(board[j][i]) != hash2.end()) {

          return false;
        }
        hash2.insert(board[j][i]);
      }
    }
  }
  int a = 0;
  int b = 0;
  while (a < 9) {
    while (b < 9) {
      set<char> hash;
      for (int i = a; i < 3 + a; i++) {
        for (int j = b; j < 3 + b; j++) {
          if (board[i][j] != '.') {
            if (hash.find(board[i][j]) != hash.end()) {
              return false;
            }
            hash.insert(board[i][j]);
          }
        }
      }
      b = b + 3;
    }
    a = a + 3;
    b = 0;
  }
  return true;
}
int main() { return 0; }
