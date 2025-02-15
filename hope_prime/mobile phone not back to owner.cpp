#include <bits/stdc++.h>
using namespace std;
long long dearr(int n)
{
    if(n==1) return 0;
    if(n==2) return 1;
    if(n==0) return 1;
    vector<long long >dp(n+1,0);
    dp[1]=0;
    dp[2]=1;
    
    for(int i=3;i<=n;i++)
    {
        dp[i]=(i-1)*(dp[i-1]+dp[i-2]);

    }
    
    return dp[n];
    
}

int main() {
    int n;
    cin>>n;
    
    long long res=dearr(n);
    cout<<res;
  return 0;  
}