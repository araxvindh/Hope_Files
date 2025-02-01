#include <bits/stdc++.h>

using namespace std;

int maxVal(vector<int>&arr,vector<vector<int>>&dp,int left,int right,int year){
    if(dp[left][right]!=-1){
        return dp[left][right];
    }
    if(left==right){
        return arr[left]*year;
    }
    int leftVal=arr[left]*year +maxVal(arr,dp,left+1,right,year+1);
    int rightVal=arr[right]*year +maxVal(arr,dp,left,right-1,year+1);

    dp[left][right]=max(leftVal,rightVal);

    return dp[left][right];
}




int main(int argc, char** argv)
{
int n;
cin>>n;
vector<int>price(n);
vector<vector<int>>dp(n,vector<int>(n,-1));
for(int i=0;i<n;i++){
    cin>>price[i];
}
cout<< maxVal(price,dp,0,n-1,1);

}

// logic :https://youtu.be/EEU6QV3tQ5k
// code : https://youtu.be/6SADv2EaoIw
