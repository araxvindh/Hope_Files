#include<bits/stdc++.h>

using namespace std;
# define ll long long int
int main()
{
    int n;
    cin>>n;

    vector<ll>arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    unordered_map<ll,ll>mpp;

    for(auto it :arr)
    {
        mpp[it]++;
    }
    int ans=-1;
    int max1=-1;
    for(int i=0;i<n;i++)
    {
        if(mpp[arr[i]]==1 && max1<arr[i])
        {
            max1=arr[i];
            ans=i+1;

        }
    }

  cout<<ans;
}
