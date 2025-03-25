#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    set<int>s1;

    int maxii=INT_MIN;
    for(int i=0;i<n;i++)
    {
        s1.insert(arr[i]);
        set<int>s2;
        int ans=s1.size();
        for(int j=i+1;j<n;j++)
        {
            s2.insert(arr[j]);
        }
        ans+=s2.size();
        maxii=max(maxii,ans);
    }

    cout<<maxii;
}



