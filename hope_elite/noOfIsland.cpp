#include <bits/stdc++.h>
using namespace std;

// Function to perform Depth-First Search
void dfs(vector<vector<char>>& grid, int i, int j, int n, int m) {
    if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] == '0') {
        return;
    }


    grid[i][j] = '0';

    // Explore all 4 directions
    dfs(grid, i - 1, j, n, m); // Up
    dfs(grid, i + 1, j, n, m); // Down
    dfs(grid, i, j - 1, n, m); // Left
    dfs(grid, i, j + 1, n, m); // Right
}


int numIslands(vector<vector<char>>& grid) {
    int n = grid.size();
    if (n == 0) return 0;
    int m = grid[0].size();
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '1') {
                count++;
                dfs(grid, i, j, n, m);
            }
        }
    }
    return count;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> grid(n, vector<char>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    cout << numIslands(grid) << endl;
    return 0;
}
/*
 grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1
