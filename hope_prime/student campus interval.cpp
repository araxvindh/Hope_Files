#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ,x,y;
    cin>>n>>x>>y;
    
    vector<pair<int,int>>arr;
    
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        arr.push_back({a,b});
    }
    
    sort(arr.begin(),arr.end());
    int maxS=INT_MIN;
    for(int i=0;i<n;i++)
    {
        int end=arr[i].second;
        int cnt=1;
        for(int j=i+1;j<n;j++)
        {
            if(end<=arr[j].first && y>arr[j].first)
            {
                cnt++;
                end=arr[j].second;
            }
        }
        maxS=max(cnt,maxS);
    }
    
    cout<<maxS;
}