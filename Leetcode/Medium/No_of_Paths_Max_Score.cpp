#include <bits/stdc++.h>
using namespace std;
vector<int> pathsWithMaxScore(vector<string> &board) {
  const int MOD = 1e9 + 7;
  int n = board.size();

  vector<vector<pair<int, int>>> dp(n, vector<pair<int, int>>(n, {0, 0}));

  // Start from S
  dp[n - 1][n - 1] = {0, 1};

  for (int i = n - 1; i >= 0; i--) {
    for (int j = n - 1; j >= 0; j--) {

      if (board[i][j] == 'X')
        continue;

      if (dp[i][j].second == 0)
        continue;

      // Up
      if (i - 1 >= 0 && board[i - 1][j] != 'X') {
        int val = (board[i - 1][j] == 'E') ? 0 : board[i - 1][j] - '0';
        int sum = dp[i][j].first + val;

        if (dp[i - 1][j].first == sum) {
          dp[i - 1][j].second = (dp[i - 1][j].second + dp[i][j].second) % MOD;
        } else if (dp[i - 1][j].first < sum) {
          dp[i - 1][j].first = sum;
          dp[i - 1][j].second = dp[i][j].second;
        }
      }

      // Left
      if (j - 1 >= 0 && board[i][j - 1] != 'X') {
        int val = (board[i][j - 1] == 'E') ? 0 : board[i][j - 1] - '0';
        int sum = dp[i][j].first + val;

        if (dp[i][j - 1].first == sum) {
          dp[i][j - 1].second = (dp[i][j - 1].second + dp[i][j].second) % MOD;
        } else if (dp[i][j - 1].first < sum) {
          dp[i][j - 1].first = sum;
          dp[i][j - 1].second = dp[i][j].second;
        }
      }

      // Diagonal
      if (i - 1 >= 0 && j - 1 >= 0 && board[i - 1][j - 1] != 'X') {
        int val = (board[i - 1][j - 1] == 'E') ? 0 : board[i - 1][j - 1] - '0';
        int sum = dp[i][j].first + val;

        if (dp[i - 1][j - 1].first == sum) {
          dp[i - 1][j - 1].second =
              (dp[i - 1][j - 1].second + dp[i][j].second) % MOD;
        } else if (dp[i - 1][j - 1].first < sum) {
          dp[i - 1][j - 1].first = sum;
          dp[i - 1][j - 1].second = dp[i][j].second;
        }
      }
    }
  }

  if (dp[0][0].second == 0)
    return {0, 0};

  return {dp[0][0].first, dp[0][0].second};
}

int main() { return 0; }
