#include<bits/stdc++.h>

using namespace std ;


int main()
{
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int flag=0;
    for(int i=0;i<n-2;i++)
    {

        if(arr[i]==arr[i+1] && arr[i]==arr[i+2])
        {
            flag=1;
        }
    }

    if(flag==0)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }


}
