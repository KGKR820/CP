#include <bits/stdc++.h>
#include <queue>
using namespace std;

int maximumSafenessFactor(vector<vector<int>> &grid) {
    int n = grid.size();

    if (grid[0][0] == 1 || grid[n - 1][n - 1] == 1)
        return 0;

    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 0)
                grid[i][j] = -1;
            else {
                grid[i][j] = 0;
                q.push({i, j});
            }
        }
    }


    while (!q.empty()) {
        int i = q.front().first;
        int j = q.front().second;
        q.pop();

        if (i + 1 < n && grid[i + 1][j] == -1) {
            grid[i + 1][j] = grid[i][j] + 1;
            q.push({i + 1, j});
        }
        if (i - 1 >= 0 && grid[i - 1][j] == -1) {
            grid[i - 1][j] = grid[i][j] + 1;
            q.push({i - 1, j});
        }
        if (j + 1 < n && grid[i][j + 1] == -1) {
            grid[i][j + 1] = grid[i][j] + 1;
            q.push({i, j + 1});
        }
        if (j - 1 >= 0 && grid[i][j - 1] == -1) {
            grid[i][j - 1] = grid[i][j] + 1;
            q.push({i, j - 1});
        }
    }

    // [3 2 1 0]
    // [2 3 2 1]
    // [1 2 3 2]
    // [0 1 2 3]

    priority_queue<pair<int, pair<int, int>>> pq;
    vector<vector<int>> maxSafenessToCell(n, vector<int>(n, -1));

    maxSafenessToCell[0][0] = grid[0][0];
    pq.push({grid[0][0], {0, 0}});

    while (!pq.empty()) {
        int curr = pq.top().first;
        int i = pq.top().second.first;
        int j = pq.top().second.second;
        pq.pop();

        if (i == n - 1 && j == n - 1)
            return curr;

        if (curr < maxSafenessToCell[i][j])
            continue;

        // As we are moving from curr to new cell
        // If the cell is included new safeness shall be min(curr,grid[new i][new j])
        // If a max Safeness is acheived from other path don't disturb it(skip that cell)

        if (i + 1 < n &&
            min(curr, grid[i + 1][j]) > maxSafenessToCell[i + 1][j]) {
            maxSafenessToCell[i + 1][j] = min(curr, grid[i + 1][j]);
            pq.push({maxSafenessToCell[i + 1][j], {i + 1, j}});
        }

        if (i - 1 >= 0 &&
            min(curr, grid[i - 1][j]) > maxSafenessToCell[i - 1][j]) {
            maxSafenessToCell[i - 1][j] = min(curr, grid[i - 1][j]);
            pq.push({maxSafenessToCell[i - 1][j], {i - 1, j}});
        }

        if (j + 1 < n &&
            min(curr, grid[i][j + 1]) > maxSafenessToCell[i][j + 1]) {
            maxSafenessToCell[i][j + 1] = min(curr, grid[i][j + 1]);
            pq.push({maxSafenessToCell[i][j + 1], {i, j + 1}});
        }

        if (j - 1 >= 0 &&
            min(curr, grid[i][j - 1]) > maxSafenessToCell[i][j - 1]) {
            maxSafenessToCell[i][j - 1] = min(curr, grid[i][j - 1]);
            pq.push({maxSafenessToCell[i][j - 1], {i, j - 1}});
        }
    }

    return 0;
}

int main() {
    vector<vector<int>> grid = {
        {0, 0, 0, 1},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {1, 0, 0, 0}
    };

    cout << maximumSafenessFactor(grid) << '\n';
}
