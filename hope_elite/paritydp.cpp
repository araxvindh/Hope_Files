#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        vector<int>dp(n+1);
        dp[0]=arr[0];
        dp[1]=max(arr[0],arr[1]);
        if(arr[0]%2== arr[1]%2){
            dp[1]=arr[0]+arr[1];
        }
        for(int i=2;i<n;i++){
            if(arr[i]%2==arr[i-1]%2){
                dp[i]=max(arr[i]+dp[i-1],arr[i]+dp[i-2]);
            }else{
                dp[i]=max(arr[i]+dp[i-2],dp[i-1]);
            }

        }
        cout<<dp[n-1];
}

