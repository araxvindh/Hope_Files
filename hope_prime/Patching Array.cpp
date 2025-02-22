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
    
    int x;
    cin>>x;
    
    long long patch=0;
    int cnt=0;
    int i=0;
    
    while(patch<x)
    {
        if(i<n && patch+1>=arr[i])
        {
            patch+=arr[i];
            i++;
        }
        else
        {
            patch+=(patch+1);
            cnt++;
        }
    }
    
    cout<<cnt;
}