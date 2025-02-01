#include<bits/stdc++.h>
using namespace std;

int main(){
        int n=4;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>dp(n+1);
        dp[0]=arr[0];
        dp[1]=max(arr[0],arr[1]);
        for(int i=2;i<n;i++){
            dp[i]=max(arr[i]+dp[i-2],dp[i-1]);
        }
        cout<<dp[n-1];
}
