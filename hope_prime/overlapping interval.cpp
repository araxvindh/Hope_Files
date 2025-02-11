#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    
    cin>>n;
    
    vector<pair<long long ,long long>>arr(n);
    for(int i=0;i<n;i++)
    {   
        cin>>arr[i].first>>arr[i].second;
    }
    
    
    long long res=0;
    sort(arr.begin(),arr.end(),[](pair<int,int>a,pair<int,int>b)
    {
        return a.second <b.second;
    });
    long long end=arr[0].second;
    for(int i=1;i<n;i++)
    {
        if(end>arr[i].first)
        {
            res++;
            //end=min(end,arr[i].second);
        }
        else
        {
            end=arr[i].second;
        }
    }
    
    cout<<res;
    return 0;
}