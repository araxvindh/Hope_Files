#include <iostream>
using namespace std;

int main() {
    sring a ,b;
    cin>>a >>b;
    int n=a.size();
    int m=b.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1));
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=i;
    }
    for(int j=0;j<=m;j++)
    {
        dp[0][j]=j;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
            }
        }
    }
    cout<<dp[n][m];

}

// logic :https://youtu.be/lizkwM1gmw4
// code  :https://youtu.be/0xLa7W6FFsw
