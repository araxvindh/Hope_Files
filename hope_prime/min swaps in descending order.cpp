#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n+1);

    for(int i=n;i>0;i--)
    {
        cin>>arr[i];
    }
    vector<bool>vis(n+1,false);
    int totalSwap=0;
    for(int ind=1;ind<=n;ind++)
    {
        if(vis[arr[ind]])
        {
            continue;
        }

        if(arr[ind]==ind)
        {
            vis[arr[ind]]=true;
            continue;
        }
        int edges=0;
        int cycleInd=ind;
        while(!vis[arr[cycleInd]])
        {
            vis[arr[cycleInd]]=true;
            edges++;
            cycleInd=arr[cycleInd];
        }
        totalSwap+=edges-1;
    }
    cout<<totalSwap;
}

//code : https://youtu.be/ZSAJLor3hSI
