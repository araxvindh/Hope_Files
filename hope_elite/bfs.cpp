#include<bits/stdc++.h>
using namespace std;


class Cell {
public:
    int row;
    int col;
    int street;
    Cell(int r, int c, int s) : row(r), col(c), street(s) {}
};

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    vector<vector<bool>> vis(n, vector<bool>(m, false));
    int startRow, startCol;
    int endRow, endCol;
    cin >> startRow >> startCol;
    cin >> endRow >> endCol;

    queue<Cell> q;
    q.push(Cell(startRow, startCol, 0));
    vis[startRow][startCol] = true;

    while (!q.empty()) {
        Cell curr = q.front();
        q.pop();

        if (curr.row == endRow && curr.col == endCol) {
            cout << curr.street << endl;
            return 0;
        }

        // Exploring all four directions
        // Left
        for (int col = curr.col - 1; col >= 0; col--) {
            if (mat[curr.row][col] == 0 || vis[curr.row][col]) {
                break;
            }
            q.push(Cell(curr.row, col, curr.street + 1));
            vis[curr.row][col] = true;
        }

        // Right
        for (int col = curr.col + 1; col < m; col++) {
            if (mat[curr.row][col] == 0 || vis[curr.row][col]) {
                break;
            }
            q.push(Cell(curr.row, col, curr.street + 1));
            vis[curr.row][col] = true;
        }

        // Up
        for (int row = curr.row - 1; row >= 0; row--) {
            if (mat[row][curr.col] == 0 || vis[row][curr.col]) {
                break;
            }
            q.push(Cell(row, curr.col, curr.street + 1));
            vis[row][curr.col] = true;
        }

        // Down
        for (int row = curr.row + 1; row < n; row++) {
            if (mat[row][curr.col] == 0 || vis[row][curr.col]) {
                break;
            }
            q.push(Cell(row, curr.col, curr.street + 1));
            vis[row][curr.col] = true;
        }
    }

    cout << "-1" << endl;  // Output -1 if no path is found
    return 0;
}

/*

5 5
1 1 1 0 1
0 0 1 1 0
0 1 0 1 1
0 1 1 1 0
1 1 0񁒶
0�0
4�0
*/
