#include <bits/stdc++.h>
using namespace std;

class Link
{

    public:
    int src ,des ,dis;
};



int main() {
    int n,m;
    cin>>n>>m;
    vector<Link>links(m);

    for(int i=1;i<=m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        Link link;
        link.src=a;
        link.des=b;
        link.dis=c;

        links.push_back(link);
    }

    vector<int>shortest(n+1,1e8);
    shortest[1]=0;
    bool relaxed=true;
    for(int i=1;i<n && relaxed;i++)
    {
        relaxed=false;
        for(auto link :links)
        {
            if(shortest[link.src]==1e8)
            {
                continue;
            }

            if(shortest[link.des]==1e8 || shortest[link.src]+link.dis<shortest[link.des])
            {
                shortest[link.des]=shortest[link.src]+link.dis;
                relaxed=true;
            }
        }
    }

    for(int i=2;i<=n;i++)
    {
        cout<<shortest[i]<<" ";
    }
}

// logic :https://youtu.be/5YHc2sR8S4o

// code  :https://youtu.be/L9hTD6Ck7Y4

