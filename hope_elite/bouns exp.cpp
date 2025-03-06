
#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{

    int n;

    cin>>n;

    vector<int>arr(n+1);
    for(int i=1;i<=n;i++)
    {

        cin>>arr[i];
    }

    vector<ll>oddarr(n+1);
    vector<ll>evenarr(n+1);
    oddarr[1]=arr[1];
    evenarr[1]=0;

    for(int i=2;i<=n;i++)
    {
     //logic is here
     oddarr[i]=max(evenarr[i-1]+arr[i],oddarr[i-1]);
     evenarr[i]=max(oddarr[i-1]+2*arr[i],evenarr[i-1]);

    }

    cout <<max(oddarr[n],evenarr[n]);
}
