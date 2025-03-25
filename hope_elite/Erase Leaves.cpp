#include<bits/stdc++.h>

using namespace std;

int dfs(vector<vector<int>>&adj ,int node ,int parent )
{
    int cnt=1;
    int maxii=0;
    for(auto it :adj[node])
    {
        if(it!=parent)
        {
            int val =dfs(adj,it,node);
            cnt+=val;
            maxii=max(maxii,val);
        }
    }
    return (node==1)?cnt-maxii:cnt;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>adj(n+1);
    int node1 ,node2;
    for(int i=1;i<n;i++)
    {
        cin>>node1>>node2;
        adj[node1].push_back(node2);
        adj[node2].push_back(node1);
    }

    cout<< dfs(adj,1,-1);
}
