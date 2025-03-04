#include <bits/stdc++.h>
using namespace std;

class dsu
{
    public:
        vector<int>parent;
        vector<int>rank;
        
        dsu(int m)
        {
            rank.resize(m,0);
            parent.resize(m);
            for(int i=0;i<m;i++) parent[i]=i;
        }
        
        int findPar(int node)
        {
            if(parent[node]==node) return node;
            
            return parent[node]=findPar(parent[node]);
        }
        
        void unionByRank(int u,int v)
        {
            int up=findPar(u);
            int vp=findPar(v);
            
            if(up==vp) return;
            
            if(rank[up]>rank[vp])
            {
                parent[vp]=up;
            }else if(rank[up]<rank[vp])
            {
                parent[up]=vp;
            }
            else
            {
                parent[up]=vp;
                rank[vp]++;
            }
        }
};

int main() {
    int n;
    cin>>n;
    vector<int>row(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>row[i];
    }
    
    int m=n/2;
    dsu ds(m);
    for(int i=0;i<n;i+=2)
    {
        ds.unionByRank(row[i]/2,row[i+1]/2);
    }
    
    int cnt=0;
    
    for(int i=0;i<m;i++)
    {
        if(ds.findPar(i)==i) cnt++;
    }
    
    cout<< m-cnt;
}