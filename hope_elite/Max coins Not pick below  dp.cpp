#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int>>matrix(r,vector<int>(c));
        vector<vector<int>>dp(r,vector<int>(c));
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                cin>>matrix[i][j];
            }
        }
        for(int col=0;col<c;col++){
            dp[0][col]=matrix[0][col];
        }
        for(int row =1 ;row<r;row++){
            vector<int>prev(c);
            copy(dp[row - 1].begin(), dp[row - 1].end(), prev.begin());
            sort(prev.begin(), prev.end());
            int firstMax=prev[c-1];
            int secMax=prev[c-2];
            for(int col=0;col<c;col++){
                if(dp[row-1][col]!=firstMax){
                    dp[row][col]=matrix[row][col]+firstMax;
                }else{
                    dp[row][col]=matrix[row][col]+secMax;
                }
            }
        }
    sort(dp[r-1].begin(),dp[r-1].end());
    cout<< dp[r-1][c-1]<<endl ;

    }
}
//copy(dp[row - 1].begin(), dp[row - 1].end(), prevRow.begin());

/*
2
5 5
25 98 74 11 89
53 68 36 48 23
4 14 99 48 41
40 22 97 72 1
29 67 61 92 49
2 6
45 10 12 78 66 90
9 1 3 15 12 95
*/
