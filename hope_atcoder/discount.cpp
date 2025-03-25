#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n ,amount;
    cin>>n>>amount;

    vector<int>price(n);
    vector<int>dis(n);

    for(int i=0;i<n;i++)
    {

        cin>>price[i];
    }

    for(int i=0;i<n;i++)
    {

        cin>>dis[i];
    }

    int res=0;

    for(int i=0;i<n;i++)
    {

        if(amount<price[i])
        {
            break;
        }

        res=dis[i];
    }

    cout<< (amount*res)/100;

}
