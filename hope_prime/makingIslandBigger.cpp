#include <bits/stdc++.h>
using namespace std;

class DisjointSet
{
    public:
        vector<int>rank,size,parent;
        
        DisjointSet(int n)
        {
            rank.resize(n+1);
            size.resize(n+1);
            parent.resize(n+1);
            for(int i=0;i<=n;i++)
            {
                parent[i]=i;
                size[i]=1;
            }
        }
        
        int  findUPar(int node)
        {
            if(parent[node]==node)
            {
                return node;
            }
            
            return parent[node]=findUPar(parent[node]);
        }
        
        void unionBySize(int u, int  v)
        {
            int ul_u=findUPar(u);
            int ul_v=findUPar(v);
            
            if(ul_u==ul_v) return ;
            
            if(size[ul_u]<size[ul_v])
            {
                parent[ul_u]=ul_v;
                size[ul_v]+=size[ul_u];
            }
            else
            {
                parent[ul_v]=ul_u;
                size[ul_u]+=size[ul_v];
            }
        }
};

bool isValid(int r,int c,int n,int m)
{
    return r>=0 && c>=0 && r<n && c<m;
}

int main() {
    
    int n,m;
    cin>>n>>m;
    
    vector<vector<int>>mat(n,vector<int>(m));
    
    for(int i=0;i<n;i++)
    {
        for(int  j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    
    DisjointSet ds(n*m);
    vector<int>vis(n*m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]==0) continue;
            
            int row[]={-1,1,0,0};
            int col[]={0,0,-1,1};
            
            for(int k=0;k<4;k++)
            {
                int adjRow=row[k]+i;
                int adjCol=col[k]+j;
                
                if(isValid(adjRow,adjCol,n,m))
                {
                    if(mat[adjRow][adjCol]==1)
                    {
                        ds.unionBySize(adjRow*m+adjCol,i*m+j);
                    }
                }
            }
        }
    }
    
    int mx=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(mat[i][j]==1) continue;
            
            int row[]={-1,1,0,0};
            int col[]={0,0,-1,1};
            unordered_set<int>st;
            for(int k=0;k<4;k++)
            {
                int adjRow=row[k]+i;
                int adjCol=col[k]+j;
                
                if(isValid(adjRow,adjCol,n,m))
                {
                    if(mat[adjRow][adjCol]==1)
                    {
                        st.insert(ds.findUPar(adjRow*m+adjCol));
                    }
                }
            }
            int totalsize=0;
            for(auto it:st)
            {
                totalsize+=ds.size[it];
            }
            
            mx=max(mx,totalsize+1);
        }
        
    }
    
    for(int cell=0;cell<n*m;cell++)
    {
        mx=max(mx,ds.size[ds.findUPar(cell)]);
    }
    cout<<mx;
    
}