#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
int n,m;
cin>>n>>m;
vector<vector<int>>mat(n,vector<int>(m));
int healthy=0;
int days=0;
queue<int>st;
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        cin>>mat[i][j];
        if(mat[i][j]==1)
        {
            healthy++;
        }
        if(mat[i][j]==2)
        {
            st.push(i*m+j);
        }
    }
}
st.push(-1);
while(!st.empty())
{
    int node =st.front();
    st.pop();
    int row=(node/m);
    int col=(node%m);
    if(node==-1)
    {
        if(!st.empty())
        {
            days++;
            st.push(-1);
        }
        continue;
    }

    if(col>0 && mat[row][col-1]==1)
    {
        mat[row][col-1]=2;
        st.push(row*m+col-1);
        healthy--;

    }

    if(col<m-1 && mat[row][col+1]==1)
    {
        mat[row][col+1]=2;
        st.push(row*m+col+1);
        healthy--;
    }

    if(row>0 && mat[row-1][col]==1)
    {
        mat[row-1][col]=2;
        st.push((row-1)*m+col);
        healthy--;
    }

    if(row<n-1 && mat[row+1][col]==1)
    {
        mat[row+1][col]=2;
        st.push((row+1)*m+col);
        healthy--;
    }

}

cout << (healthy==0)?days:-1 ;

}

// logic :https://youtu.be/Dfaj2vA6Vi0
//  code :https://youtu.be/Cs9P7CP-JFI
