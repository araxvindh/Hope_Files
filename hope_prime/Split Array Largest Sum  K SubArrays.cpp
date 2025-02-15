#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>&arr,int mid ,int n,int m)
{
    int d=1;
    long long cnt=0; 
    for(int i=0;i<n;i++)
    {
        if(cnt+arr[i]<=mid)
        {
            cnt+=arr[i];
        }
        else
        {
            d++;
            cnt=arr[i];
        }
    }
    return d;
}


int main() {
    int n,k;
    cin>>n>>k;
    
    vector<int>arr(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);
    
    if(k>n)
    {
        cout<<"-1";
        return 0;
    }
    while(low<=high)
    {
        int mid=(low+high)/2;
        
        int minArr =findMin(arr,mid,n,k);
        
        if(minArr>k)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    
    cout<<low;
}