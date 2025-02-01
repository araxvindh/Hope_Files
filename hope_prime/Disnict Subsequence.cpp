#include <bits/stdc++.h>
using namespace std;

int main() {
    string a ,b;
    cin>>a>>b;

    int n=a.size();
    int m=b.size();

    vector<vector<int>>dp(n+1,vector<int>(m+1,0));

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i]==b[j])
            {
                dp[i][j]=dp[i-1][j-1]+dp[i][j-1];
            }
            else
            {
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][m];
}
