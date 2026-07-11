#include <bits/stdc++.h>
#include <queue>
using namespace std;
bool findSafeWalk(vector<vector<int>>& grid, int health) {
    queue<pair<int, int>> q;

            int r = grid.size();
            int c = grid[0].size();

            vector<vector<int>> h(r, vector<int>(c, -1));

            h[0][0] = health - grid[0][0];
            q.push({0, 0});

            while (!q.empty()) {
                int i = q.front().first;
                int j = q.front().second;
                q.pop();

                if (h[i][j] <= 0) continue;

                if (i + 1 < r && (h[i][j] - grid[i + 1][j]) > h[i + 1][j]) {
                    h[i + 1][j] = h[i][j] - grid[i + 1][j];
                    q.push({i + 1, j});
                }

                if (i - 1 >= 0 && (h[i][j] - grid[i - 1][j]) > h[i - 1][j]) {
                    h[i - 1][j] = h[i][j] - grid[i - 1][j];
                    q.push({i - 1, j});
                }

                if (j + 1 < c && (h[i][j] - grid[i][j + 1]) > h[i][j + 1]) {
                    h[i][j + 1] = h[i][j] - grid[i][j + 1];
                    q.push({i, j + 1});
                }

                if (j - 1 >= 0 && (h[i][j] - grid[i][j - 1]) > h[i][j - 1]) {
                    h[i][j - 1] = h[i][j] - grid[i][j - 1];
                    q.push({i, j - 1});
                }
            }

            return h[r - 1][c - 1] > 0;
}
int main(){
    vector<vector<int>> grid = {{0,1,1,0,0,0},{1,0,1,0,0,0},{0,1,1,1,0,1},{0,0,1,0,1,0}};
    cout << findSafeWalk(grid, 3);
}
