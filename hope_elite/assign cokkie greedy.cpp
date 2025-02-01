#include<bits/stdc++.h>

using namespace std;

int main()
{
    int g,s;
    cin>>g>>s;

    vector<int>child(g);
    vector<int>cook(s);

    for(int i=0;i<g;i++)
    {
        cin>>child[i];
    }
    for(int i=0;i<s;i++)
    {
        cin>>cook[i];
    }
    int l=0;
    int r=0;
    while (l<g &&r<s)
    {
        if (child[l]==cook[r]){
            l++;
            r++;
        }
        l++;
    }
    cout<<r;
}
