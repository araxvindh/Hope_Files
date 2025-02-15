#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m,h;
    cin>>n>>m>>h;
    
    vector<vector<int>>grid(n,vector<int>(m));
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    
    vector<vector<int>>maxHealth(n,vector<int>(m,INT_MIN));
    
    priority_queue<pair<int,pair<int,int>>>pq;
    pq.push({h-grid[0][0],{0,0}});
    
    maxHealth[0][0]=h-grid[0][0];
    
    int dx[]={-1,1,0,0};
    int dy[]={0,0,-1,1};
    int flag=1;
    while(!pq.empty())
    {
        int curr =pq.top().first;
        int r=pq.top().second.first;
        int c=pq.top().second.second;
        pq.pop();
        if(n-1==r && m-1==c && curr>=1) 
        {
            cout<<"true";
            return 0 ;
        }
        for(int i=0;i<4;i++)
        {
            int nr=r+dx[i];
            int nc=c+dy[i];
            
            if(nr>=0 && nr<n && nc>=0 && nc<m)
            {
                if(maxHealth[nr][nc] < curr-grid[nr][nc])
                {
                    maxHealth[nr][nc]=curr-grid[nr][nc];
                    pq.push({maxHealth[nr][nc],{nr,nc}});
                }
            }
        }
    }
   
   cout<<"false"; 
}