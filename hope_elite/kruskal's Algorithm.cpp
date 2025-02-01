/*
to find the mst(min spanning tree) also can be done by using prim's algo

sort all the edges with acc to weigth

(wt,u,v)
1 1 4 take
2 1 2 t
3 2 3 t
3 2 4 nt
4 1 5 t
5 3 4 nt
7 2 6 t
8 3 6 nt
9 4 5 nt
*/
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class DisjointSet
{
    vector<int> rank1,parent,size1;

public:
    DisjointSet(int n)
    {
        rank1.resize(n+1,0);
        parent.resize(n+1);
        size1.resize(n+1,1);
        for(int i=0;i<n;i++)
        {
            parent[i]=i;
        }

    }

    int findUPar(int node)
    {

        if(node==parent[node])
            return node;
        return parent[node]=findUPar(parent[node]);
    }
    void unionByRank(int u,int v)
    {
        int ulp_u=findUPar(u);
        int ulp_v=findUPar(v);

        if(ulp_u==ulp_v) return ;

        if(rank1[ulp_u]<rank1[ulp_v])
        {
            parent[ulp_u]=ulp_v;
        }
        else if( rank1[ulp_v] <rank1[ulp_u])
        {
            parent[ulp_v]=ulp_u;
        }
        else{
            parent[ulp_v]=ulp_u;
            rank1[ulp_u]++;
        }
    }


     void unionBySize(int u,int v)
    {
        int ulp_u=findUPar(u);
        int ulp_v=findUPar(v);
        if(size1[ulp_u]<size1[ulp_v])
        {
            parent[ulp_u]=ulp_v;
            size1[ulp_v]+=ulp_u;
        }
        else
        {
            parent[ulp_v]=ulp_u;
            size1[ulp_u]+=ulp_v;
        }
    }
};










class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
       vector<pair<int,pair<int,int>>> edges;

       for(int i=0;i<V;i++)
       {
           for(auto it : adj[i])
           {
               int adjNode=it[0];
               int wt=it[1];

               int node=i;

               edges.push_back({wt,{node,adjNode}});
       }
    }
    DisjointSet ds(V);
    sort(edges.begin(),edges.end());
    int msWt=0;

    for(auto it :edges)
    {
        int wt =it.first;
        int u=it.second.first;
        int v=it.second.second;

        if(ds.findUPar(u)!=ds.findUPar(v))
        {
            msWt+=wt;
            ds.unionBySize(u,v);
        }
    }return msWt;
    }

};




int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }

        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";

cout << "~" << "\n";
}

    return 0;
}
