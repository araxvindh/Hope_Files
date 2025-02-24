/*
union by rank
union by size
to find parent


*/
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

int main()
{
   DisjointSet ds(7);
   ds.unionByRank(1,2);
   ds.unionByRank(2,3);
   ds.unionByRank(4,5);
   ds.unionByRank(6,7);
   ds.unionByRank(5,6);
   // if 3 and 7 same or not
   ds.unionByRank(3,7);
   if(ds.findUPar(3)==ds.findUPar(7))
   {
       cout<<"Same";
   }
   else cout<<"NOt same";
}
