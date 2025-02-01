
#include<bits/stdc++.h>
using namespace std;

int distinctSubsequences(vector<vector<int>>&dp,string a,string b,int row,int col)
{
    if(col<0)
    {
        return 1;
    }

    if(row<0)
    {
        return 0;
    }
    if(dp[row][col]!=-1)
    {
        return dp[row][col];
    }

    if(a[row]==b[col])
    {
        dp[row][col]=distinctSubsequences(dp,a,b,row-1,col-1)+distinctSubsequences(dp,a,b,row-1,col);
    }
    else
    {
        dp[row][col]=distinctSubsequences(dp,a,b,row-1,col);
    }
    return dp[row][col];
}



int main()
{
    string a,b;
    cin>>a>>b;
    int n=a.size()+1;
    int m=b.size()+1;
    vector<vector<int>>dp(n,vector<int>(m,-1));
    cout << distinctSubsequences(dp,a,b,n-1,m-1);
}

/*
leetcode-115
baat
bat
2
                        baat
                        bat
                        /  \
                    baa       baa
                    ba        bat
                    / \         \
                ba      ba       ba
                b       b        bat
                 \       \         \
                  b       b         b
                  b       b         bat
                  /       /          \
                -1       -1          -1



*/
