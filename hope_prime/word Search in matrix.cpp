#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<char>>&mat,string &word,int index,int row,int col,int &pos ,int n,int m)
{
    if(row>=0 && col>=0 &&row<n && col<m)
    {
        if(index==word.size())
        {
            pos=1;
            return;
        }
        if(mat[row][col]!=word[index])
        {
            return;
        }
        char backup=mat[row][col];
        mat[row][col]='-';
        dfs(mat,word,index+1,row-1,col,pos,n,m);
        dfs(mat,word,index+1,row+1,col,pos,n,m);
        dfs(mat,word,index+1,row,col-1,pos,n,m);
        dfs(mat,word,index+1,row,col+1,pos,n,m);
        mat[row][col]=backup;
    }
}
int main(int argc, char** argv)
{
int n,m;
cin>>n>>m;

vector<vector<char>>mat(n,vector<char>(m));

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>mat[i][j];
    }
}

string word;

cin>>word;
int pos=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(mat[i][j]==word[0])
        {
            dfs(mat,word,0,i,j,pos,n,m);
            if(pos==1)
            {
                cout<<"yes";
                return 0;
            }
        }
    }
}
cout<<"no";
return 0;

}


// logic: https://youtu.be/YGk1yAeOUsw
// code : https://youtu.be/_GIT1qHUy8Y
