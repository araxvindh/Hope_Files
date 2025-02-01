#include <bits/stdc++.h>

using namespace std;
void trigger(vector<vector<char>>& mat, int a, int b, int explosive, int n, int m) {
    vector<int> rowR = { -1, -1, -1, 0, 1, 1, 1, 0 };
    vector<int> colR = { 0, 1, -1, 1, 1, 0, -1, -1 };
    mat[a][b]=='H';
    explosive--;
    for (int k = 0; k < 8; k++) {
        int row1 = a + rowR[k];
        int col1 = b + colR[k];
        if (row1 < n && col1 < m && row1 >= 0 && col1 >= 0) {
            if (mat[row1][col1] == 'E') {
                mat[row1][col1] = 'H';
                explosive--;
                trigger(mat, row1, col1, explosive, n, m);
            }
        }
    }
}
int expcnt(vector<vector<char>>&mat,int n,int m)
{
    int v=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]=='E'){
                v++;
            }
        }
    }
    return v;
}

int main(int argc, char** argv) {
    int n, m;
    cin >> n >> m;
    vector<vector<char>> mat(n, vector<char>(m));
    int explosive = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 'E')
                explosive++;
        }
    }
    int x;
    cin >> x;
    int a, b;
    for (int i = 0; i < x; i++) {
        cin >> a >> b;

            trigger(mat, a - 1, b - 1, explosive, n, m);

    }
    cout << expcnt(mat,n,m)<<endl;
    cout<<endl;
    cout<<explosive;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
//input
// 5 5
/// E A A E W
/// A E B E A
/// X E A N N
/// C Z E E E
/// E Q B B E
// 1
// 2 2
