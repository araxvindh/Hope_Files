#include<bits/stdc++.h>
using namespace std;

int main() {
    int N,K;
    cin>>N>>K;
    vector<int>channels;
    for(int i=1;i<=N;i++)
    {
        channels.push_back(i);
    }
    int delInd=K-1;
    while(channels.size()>1)
    {
        channels.erase(channels.begin()+delInd);
        delInd--;
        if(delInd==-1)
        {
            delInd=channels.size()-1;
        }

        delInd+=K;
        if(delInd >=channels.size())
        {
            delInd=delInd%channels.size();
        }

    }
    cout<<channels[0];
}

// logic :https://youtu.be/sslimMKDDQE
// code :https://youtu.be/lvMV7-SPFrU
