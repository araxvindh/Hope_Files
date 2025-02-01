#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{

int n,m;
cin>>n>>m;
vector<vector<int>>mat(n+1,vector<int>(n+1,-1));
vector<int>vis(n+1,0);

int minCostSrc=-1;
int minCostDes=-1;
int minCost=INT_MAX;
for(int roads=1;roads<=m;roads++)
{
    int src,des,cost;
    cin>>src>>des>>cost;
    mat[src][des]=mat[des][src]=cost;

    if(cost<minCost)
    {
        minCost=cost;
        minCostSrc=src;
        minCostDes=des;
    }
}
int totalCost=minCost,rem=n-2;
vis[minCostSrc]=vis[minCostDes]=1;
while(rem>0)
{
    minCost=INT_MAX;
    for(int city=1;city<=n;city++)
    {
        if(vis[city]==1)
        {
        for(int oth=1;oth<=n;oth++)
        {
            if(city==oth || vis[oth]==1 || mat[city][oth]==-1)
            {
                continue;
            }

            if(mat[city][oth]<minCost)
            {
                minCost=mat[city][oth];
                minCostDes=oth;
            }
        }
        }
    }
    vis[minCostDes]=1;
    totalCost+=minCost;
    rem--;
}
cout<<totalCost;
}


// logic : https://youtu.be/FUrF80WxRwk
// code : https://youtu.be/FMW1ZVqbzJk
