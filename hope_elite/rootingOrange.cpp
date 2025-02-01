#include<bits/stdc++.h>
using namespace std;

class Orange {
public:
    int row;
    int col;
    int min1;

    Orange(int r, int c, int s): row(r), col(c), min1(s) {}
};

int rottenOrange(vector<vector<int>>& grid, int n, int m) {
    int minTime = 0;
    queue<Orange> q;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == 2) {
                q.push(Orange(i, j, 0));
            }
        }
    }

    int row1[] = {-1, 1, 0, 0}; // Up, Down, Left, Right
    int col1[] = {0, 0, -1, 1};

    while(!q.empty()) {
        Orange curr = q.front();
        q.pop();
        for(int k = 0; k < 4; k++) {
            int row2 = curr.row + row1[k];
            int col2 = curr.col + col1[k];

            if(row2 >= 0 && col2 >= 0 && row2 < n && col2 < m && grid[row2][col2] == 1) {
                grid[row2][col2] = 2;
                q.push(Orange(row2, col2, curr.min1 + 1));
                minTime = curr.min1 + 1;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == 1) {
                return -1;
            }
        }
    }

    return minTime;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    cout << rottenOrange(grid, n, m);
    return 0;
}



/*
3 3
2 1 1
0 1 1
1 0 1
*/
