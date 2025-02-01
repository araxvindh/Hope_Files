#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>&arr,vector<vector<int>>&dp,int left,int right)
{
    if(left>right)
    {
        return 0;
    }


    if(dp[left][right]!=-1)
    {
        return dp[left][right];
    }

    int maxpoint=-1;

    for(int i=left;i<=right;i++)
    {
        int point=solve(arr,dp,left,i-1)+solve(arr,dp,i+1,right)+(arr[left-1]*arr[i]*arr[right+1]);

        maxpoint=max(point,maxpoint);
    }

    dp[left][right]=maxpoint;

    return maxpoint;
}


int main() {
    int n;
    cin>>n;

    vector<int>arr(n+2,1);

    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    vector<vector<int>>dp(n+2,vector<int>(n+2,-1));

    cout<<solve(arr,dp,1,n);
}

// 3 1 5 8
