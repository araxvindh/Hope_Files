#include<bits/stdc++.h>

using namespace std;

int pick(vector<vector<int>>& grid, vector<vector<vector<int>>>& dp, int n, int r1, int c1, int r2) {
    int c2 = r1 + c1 - r2;
    if (r1 >= n || r2 >= n || c1 >= n || c2 >= n || grid[r1][c1] == -1 || grid[r2][c2] == -1) {
        return INT_MIN;
    }
    if (dp[r1][c1][r2] != -1) {
        return dp[r1][c1][r2];
    }
    if (r1 == n - 1 && c1 == n - 1) {
        return grid[r1][c1];
    }
    int cherries = grid[r1][c1];
    if (r1 != r2 && c1 != c2) {
        cherries += grid[r2][c2];
    }
    int rr = pick(grid, dp, n, r1, c1 + 1, r2);
    int rd = pick(grid, dp, n, r1, c1 + 1, r2 + 1);
    int dd = pick(grid, dp, n, r1 + 1, c1, r2 + 1);
    int dr = pick(grid, dp, n, r1 + 1, c1, r2);

    dp[r1][c1][r2] = cherries + max(max(rr, rd), max(dd, dr));
    return dp[r1][c1][r2];
}


int cherryPick(vector<vector<int>>&grid)
{
    int n=grid.size();
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(n, vector<int>(n, -1)));

    int cherries=pick(grid,dp,n,0,0,0);
    return max(0,cherries);
}




int main()
{

    int n;
    cin>>n;
    vector<vector<int>>grid(n,vector<int>(n));

    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
          cin>>grid[i][j];
      }

    }
    cout<< cherryPick(grid);
}
