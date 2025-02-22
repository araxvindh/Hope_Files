#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    
    int n;
    cin>>n;
    
    unordered_set<string>set;
    
    for(int i=0;i<n;i++)
    {
        string a;
        cin>>a;
        set.insert(a);
    }
    vector<bool>dp(s.size()+1,0);
    dp[0]=true;
    
    for(int i=1;i<=s.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(dp[j] && set.count(s.substr(j,i-j)))
            {
                dp[i]=true;
                break;
            }
        }
    }
    
    if(dp[s.size()])
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}