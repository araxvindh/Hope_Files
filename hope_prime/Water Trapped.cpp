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

    int left=0;
    int right=n-1;
    int lmax=arr[0];
    int rmax=arr[n-1];

    int waterTrapped=0;

    while(left<right)
    {
        if(lmax<=rmax)
        {
            waterTrapped+=(lmax-arr[left++]);
            lmax=max(lmax,arr[left]);
        }
        else
        {
            waterTrapped+=(rmax-arr[right--]);
            rmax=max(rmax,arr[right]);
        }
    }
    cout<<waterTrapped;

}

