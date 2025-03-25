#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n=7;

    vector<int>arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    unordered_map<int,int>mpp;

    for(auto it : arr)
    {
        mpp[it]++;
    }

    bool flag1=0;
    int flag2=0;

    for(auto it :mpp)
    {
        if(it.second==2)
        {
            flag1=1;
        }else if(it.second>=3)
        {
            flag2++;
        }
    }

    if(flag1&& flag2>=1 || flag2>=2)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}
