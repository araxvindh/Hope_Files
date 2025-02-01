#include <bits/stdc++.h>

using namespace std;
bool dfs(vector<vector<int>>&mat,int i,int j,int n,int m)
{
    if(i>=0 && i<n && j>=0 && j<m && mat[i][j]!=0 )
    {
        mat[i][j]=0;
        dfs(mat,i+1,j ,n,m);
        dfs(mat,i-1,j-1,n,m);
        dfs(mat,i,j+1,n,m);
        dfs(mat,i,j-1,n,m);
        dfs(mat,i-1,j+1,n,m);
        dfs(mat,i-1,j-1,n,m);
        dfs(mat,i+1,j+1,n,m);
        dfs(mat,i+1,j-1,n,m);
        return true;

    }
    return false;
}



int main(int argc, char** argv)
{
int n,m;
cin>>n>>m;

vector<vector<int>>mat(n,vector<int>(m));
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>mat[i][j];
    }
}
int cnt=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(mat[i][j]==1)
        {
            dfs(mat,i,j,n,m);
            cnt++;
        }
    }
}

}



//logic : https://youtu.be/Srq5PsC9M-c
// code : https://youtu.be/8GoKStp3Bxw
