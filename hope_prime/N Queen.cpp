#include <bits/stdc++.h>
using namespace std;

bool solveNQueen(int n, vector<vector<int>> &mat, vector<bool> &row, vector<bool> &col, vector<bool> &right, vector<bool> &left, vector<bool> &place, int i) {
    if (i == n) {
        return true;
    }

    if (place[i]) {
        return solveNQueen(n, mat, row, col, right, left, place, i + 1);
    }

    for (int j = 0; j < n; j++) {
        if (!row[i] && !col[j] && !right[i + j] && !left[j - i + n - 1]) {
            row[i] = col[j] = right[i + j] = left[j - i + n - 1] = true;
            place[i] = true;
            mat[i][j] = 1;
            if (solveNQueen(n, mat, row, col, right, left, place, i + 1)) {
                return true;
            }
            row[i] = col[j] = right[i + j] = left[j - i + n - 1] = false;
            place[i] = false;
            mat[i][j] = 0;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n, 0));
    vector<bool> rowCheck(n, false);
    vector<bool> colCheck(n, false);
    vector<bool> rdCheck(2 * n - 1, false);
    vector<bool> ldCheck(2 * n - 1, false);
    vector<bool> queenPlaced(n, false);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 1) {
                rowCheck[i] = true;
                colCheck[j] = true;
                rdCheck[i + j] = true;
                ldCheck[j - i + n - 1] = true;
                queenPlaced[i] = true;
            }
        }
    }

    if (solveNQueen(n, mat, rowCheck, colCheck, rdCheck, ldCheck, queenPlaced, 0)) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "NotPossible";
    }
}

//logic :https://youtu.be/k7XgF8v1hZ0
// code :https://youtu.be/YE6S2vHGHCgS
