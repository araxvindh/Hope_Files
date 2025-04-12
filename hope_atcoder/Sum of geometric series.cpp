#include<bits/stdc++.h>

using namespace std;

#define ll long long int

int main()
{
    ll n,m;

    cin>>n>>m;

    ll sum1=0;

    ll k=1000000000;

    for(int i=0;i<=m;i++)
    {
        sum1+= pow(n,i);

        if(sum1>k)
        {
            cout <<"inf";
            return 0;
        }
    }

    cout<<sum1;


}
