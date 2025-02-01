#include<bits/stdc++.h>

using namespace std;

bool isValid(int row,int col,int r,int c )
{
    return row>=0 && row<r && col>=0 && col<c;
}



int result(vector<vector<int>>&dp , vector<vector<int>>&matrix,int row,int col,int prev,int r,int c)
{

   if(!isValid(row,col,r,c))
   {
       return 0;
   }

   if(matrix[row][col]<=prev)
   {
       return 0;
   }


   if(dp[row][col]!=-1)
   {
       return dp[row][col];
   }

   int top = result(dp,matrix,row-1,col-1,matrix[row][col],r,c);
   int bottom = result(dp,matrix,row+1,col+1,matrix[row][col],r,c);
   int left =result(dp,matrix,row,col-1,matrix[row][col],r,c);
   int right= result(dp,matrix,row,col+1,matrix[row][col],r,c);


   int currMax= max(max(top,bottom),max(left,right));

   dp[row][col]=currMax+1;

   return dp[row][col];
}





int main()
{
  int n=3;
  int m=3;
  vector<vector<int>>matrix(n,vector<int>(m));
  for(int i=0 ;i<n ;i++ )
  {
      for(int j=0;j<m;j++)
      {
          cin>> matrix[i][j];
      }
  }
  vector<vector<int>>dp(n,vector<int>(m,-1));

  int longest=-1;
  for(int row=0;row<n;row++)
  {
      for(int col=0;col<m;col++)
      {
          longest=max(longest,result(dp,matrix,row,col,-1,n,m));
      }
  }
  cout << longest;

}
