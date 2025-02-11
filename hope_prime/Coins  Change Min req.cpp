#include <bits/stdc++.h>
using namespace std;

int minCoin(vector<int>&coins,vector<vector<int>>&dp ,int ind ,int sum)
{
    if(sum==0) return 0;
    
    if(sum<0 || ind==coins.size()) return INT_MAX;
    
    if(dp[ind][sum]!=-1) return dp[ind][sum];
    
    int take =INT_MAX;
    
    take=minCoin(coins,dp,ind,sum-coins[ind]);
    
    if(take!=INT_MAX)
    {
        take++;
    }
    
    int notTake=minCoin(coins,dp,ind+1,sum);
    
    return dp[ind][sum]=min(take,notTake);
}

int main() {
    
    int n ,sum;
    cin>>n>>sum;
    
    vector<int>coins(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>coins[i];
    }
    
    vector<vector<int>>dp(n,vector<int>(sum+1,-1));
    
    int ans =minCoin(coins,dp,0,sum);
    
    if(ans==INT_MAX)
    {
        cout<<-1;
    }
    else
    {
        cout<<ans;
    }
}