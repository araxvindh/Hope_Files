#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;

    int cnt=0;
    int n=s.size();
    if(s[0]=='o')
    {
        cnt++;
    }
    char prev=s[0];
    for(int i=1;i<n;i++)
    {
        if(prev==s[i])
        {
            cnt++;
        }prev=s[i];
    }
    if((n+cnt)%2!=0)
    {

        cnt++;
    }
    cout<<cnt;
}
