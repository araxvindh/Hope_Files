#include <bits/stdc++.h>
using namespace std;

int main() {
    int  n;
    cin>>n;
    vector<int>num1(n);
    for(int i=0;i<n;i++)
    {
        cin>>num1[i];
    }
    int mod =1e9+7;
    int m;
    cin>>m;
    vector<int>num2(m);
    for(int i=0;i<m;i++)
    {
        cin>>num2[i];
    }
    
    long long int maxScore=0;
    int i=0;
    int j=0;
    long long s1=0;
    long long s2=0;
    
    while(i<n && j<m)
    {
        if(num1[i]==num2[j])
        {
           maxScore+=max(s1,s2)+num1[i];
           i++;
           j++;
           s1=0;
           s2=0;
        }else  if(num1[i]<num2[j])
        {
            s1+=num1[i];
            i++;
        }
        else
        {
            s2+=num2[j];
            j++;
        }
    }  
        while(i<n)
        {
            s1+=num1[i];
            i++;
        }
        while(j<m)
        {
            s2+=num2[j];
            j++;
        }
        
        maxScore+=max(s1,s2);
        maxScore=maxScore%mod;
        
        
        cout<<(int)maxScore;
    
}