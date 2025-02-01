#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    vector<vector<bool>>dp(n+1,vector<bool>(sum+1));

    for(int i=1;i<=n;i++)
    {
        int curr=arr[i-1];
        for(int j=0;j<=sum;j++)
        {
            if(j>=curr && ((curr==j)||(dp[i-1][j-curr]))
            {
                dp[i][j]==true;
            }

            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    int count=0;
    for(int i=2;i<=sum;i+=2)
    {
        if(dp[n][i])
        {
            count++;
        }
    }
    cout<<count;

}

//logic :https://youtu.be/HARX1OyVqdg

// code :https://youtu.be/idDVJ1CWvSo
