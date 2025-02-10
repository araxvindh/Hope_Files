#include <bits/stdc++.h>
using namespace std;
bool isPallindrome(string &str,int i,int j)
{
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}



void minCuts(string & str,int i,int n,vector<int>&dp)
{
    if(i==n) return 0;
    
    if(dp[i]!=-1)
    {
        return dp[i];
    }
    int minCost=INT_MAX;
    string temp="";
    for(int j=i;j<n;j++)
    {
        temp+=str[j];
        
        if(isPallindrome(str,i,j))
        {
            int cost=1+minCuts(str,j+1,n,dp);
            
            minCost=min(minCost,cost);
            
        }
    }
    dp[i]=minCost;
    
    return dp[i];
}


int main() {
    string str ;
    cin>>str;
    int n=str.size();
    vector<int>dp(n,-1);
    cout<< minCuts(str,0,n,dp)-1;
    
}

//logic :https://youtu.be/HK1qCy6FYdo

//code : https://youtu.be/1ajrr9Yy-PU