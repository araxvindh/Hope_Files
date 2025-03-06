#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>>adj(n+1);
    int node1 ,node2;
    for(int i=1;i<=n;i++)
    {
        cin>>node1>>node2;
        adj[node1].push_back(node2);
        adj[node2].push_back(node1);
    }

    cout << adj[1][0];
}
