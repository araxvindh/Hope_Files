#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
int r,c;
cin>>r>>c;
vector<vector<int>>mat(r,(vector<int>(c+1)));
for(int row=0;row<r;row++)
{
    mat[row][0]=0;
}
for(int row=0;row<r;row++)
{
    int curr;
    for(int col=1;col<c+1;col++)
    {
        cin>>curr;
        mat[row][col]=curr+mat[row][col-1];
    }
}
int k;
cin>>k;
int max1=INT_MIN;
for(int row=0;row<=r-k;row++)
{
    for(int col=1;col<=c-k+1;col++)
    {
        int sum=0;
        for(int srow=row;srow<row+k;srow++)
        {
           sum+=mat[srow][col+k-1]-mat[srow][col-1];
           max1=max(max1,sum);
        }
    }
}
cout<<max1;

}


//logic :https://youtu.be/c033YjJMO0w
//code  :https://youtu.be/8lWruKXUcVU
//code : https://youtu.be/gCwlR3msSEM
