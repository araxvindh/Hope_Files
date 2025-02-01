#include <iostream>
using namespace std;

int main() {
    string text , pattern;
    cin>>text>>pattern;
    int n=text.size();
    int m=pattern.size();
    vector<vector<bool>>dp(n+1,vector<bool>(m+1,false));
    dp[0][0]=1;
    if(pattern[0]=='*')
    {
        dp[0][1]=true;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(text[i-1]==pattern[j-1] || pattern[j-1]=='?')
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else if(pattern[j-1]=='*')
            {
                dp[i][j]=dp[i-1][j] || dp[i][j-1];
            }

        }
    }
    cout<< (dp[n][m])?"Matching":"Not matching";

}

// logic :https://youtu.be/g7KXWiiOtbA
// code :https://youtu.be/BotnSue5_eA
