#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string s="";
    if(n%2==0)
    {
        for(int i=0;i<n/2-1;i++)
        {
            s+='-';
        }
        s+='=';
        string a=s;
        reverse(a.begin(),a.end());
        s+=a;
    }
    else
    {
        for(int i=0;i<n/2;i++)
        {
            s+='-';
        }
        string a=s;
        s+='=';
        s+=a;
    }

    cout<<s;
}
