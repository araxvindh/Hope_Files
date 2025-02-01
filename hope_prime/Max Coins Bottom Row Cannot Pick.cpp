#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
int t;
cin>>t;
while(t>0)
{
    int r,c;
    cin>>r>>c;
    vector<vector<int>>matrix(r,vector<int>(c));

    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cin>>matrix[i][j];
        }
    }
    vector<vector<int>>dp(r,vector<int>(c,0));
    for(int col=0;col<c;col++){
        dp[0][col]=matrix[0][col];
    }

    for(int row=1;row<r;row++){
        vector<int>arr(c);
        copy(dp[row-1].begin(),dp[row-1].end(),arr.begin());
        sort(arr.begin(),arr.end());
        int firstMax=arr[c-1];
        int secMax= (c>1) ? arr[c-2] : firstMax;
        for(int col=0;col<c;col++){
            if(dp[row-1][col]==firstMax & c>1){
                dp[row][col]=matrix[row][col]+secMax;
            }else{
                dp[row][col]=matrix[row][col]+firstMax;
            }
        }
    }
    sort(dp[r-1].begin(),dp[r-1].end());
    cout<<dp[r-1][c-1]<<endl;
    t--;
}

}

//logic :https://youtu.be/JMRDYzTB4iE
// code :https://youtu.be/2vkj5ZcoykQ
