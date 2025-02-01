#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
string a;
cin>>a;
string b;
cin>>b;

int n=a.size();
int m=b.size();

vector<vector<int>>mat(n,vector<int>(m));
int maxLen=0;
for(int i=1;i<n;i++)
{
    for(int j=1;j<m;j++)
    {
        if(a[i]==b[j])
        {
            mat[i][j]=(row==0 || col==0)?1:1+mat[i-1][j-1];
            maxLen=max(maxLen,mat[i][j]);
        }
        else
        {
           mat[i][j]=0;
        }
    }
}
cout<<maxLen;

}
// code:https://youtu.be/p7n6pxLVo3s
// logic:https://youtu.be/oQbU2ws1lWg
