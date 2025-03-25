#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n-->0)
    {
        int x,y;
        cin>>x>>y;
        int sum=0;
        for(int i=0;i<x;i++)
        {
            int a;
            cin>>a;
            sum+=a;
        }

        if(sum%x==0 && sum/x==y)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }

    }
}
