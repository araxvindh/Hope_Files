#include <bits/stdc++.h>
using namespace std;

vector<int>getRelated(vector<vector<int>>&mat,int node,int n)
{
    vector<int>nodes;

    int nodeRow=node/n;
    int nodeCol=node%n;

    for(int col=nodeCol-1;col>=0;col--)
    {
        if(mat[nodeRow][col]==1)
        {
            nodes.push_back(nodeRow*n+col);
        }
        else
        {
            break;
        }
    }

    for(int col=nodeCol+1;col<n;col++)
    {
        if(mat[nodeRow][col]==1)
        {
            nodes.push_back(nodeRow*n+col);
        }
        else
        {
            break;
        }
    }

    for(int row=nodeRow-1;row>=0;row--)
    {
        if(mat[row][nodeCol]==1)
        {
            nodes.push_back(row*n+nodeCol);
        }
        else
        {
            break;
        }
    }

    for(int row=nodeRow+1;row<n;row++)
    {
        if(mat[row][nodeCol]==1)
        {
            nodes.push_back(row*n+nodeCol);
        }else
        {
            break;
        }
    }
    return nodes;
}


int main() {
    int n;
    cin>>n;
    vector<vector<int>>mat(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }

   int a,b,c,d;
   cin>>a>>b;
   cin>>c>>d;
   int source= (a)*n+b;
   int des=(c)*n+d;

   vector<int>vis(n*n);
   vector<int>streetCount(n*n);
   queue<int>q;
   q.push(source);
   while(!q.empty())
   {
       int node =q.front();
       q.pop();
       vector<int>related=getRelated(mat,node,n);
       for(auto it : related)
       {
           if(!vis[it])
           {
               q.push(it);
               vis[it]=true;
               streetCount[it]=1+streetCount[node];
               if(it==des)
               {
                   cout<<streetCount[it];
                   return 0;
               }
           }
       }
   }
   cout<<streetCount[des];

}

//logic:https://youtu.be/wdeJvXF6YRY
//code :https://youtu.be/2Xc955dNIys
