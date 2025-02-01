#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<vector<int>>arr(n,vector<int>(2));
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<2;j++)
       {
           cin>>arr[i][j];
       }
    }
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++)
    {
        if(ans.empty()|| arr[i][0]>ans.back()[1])
        {
           ans.push(arr[i]);
        }
        else
        {
            ans.back()[1]=max(ans.back()[1],arr[i][1])
        }
    }

    int m=ans.size();

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
