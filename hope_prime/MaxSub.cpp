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

    int maxSum=arr[0];
    int maxi=0;
    for(int i=1;i<n;i++)
    {
        maxSum+=arr[i];

        maxi=max(maxi,maxSum);

        if(maxSum<0)
        {
            maxSum=0;
        }
    }
    return maxi;
}