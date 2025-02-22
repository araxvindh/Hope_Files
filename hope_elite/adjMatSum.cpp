#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    vector<int>rowDiff={-1,-1,-1,0,1,1,1,0};
    vector<int>colDiff={-1,0,1,1,1,0,-1,-1};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int sum=0;
            for(int k=0;k<8;k++){
                int adjR=i+rowDiff[k];
                int adjC=j+colDiff[k];
                if(adjR>=0 && adjC >=0 && adjR <= n-1 && adjC <= m-1){
                    sum+=mat[adjR][adjC];
                }
            }
            cout<< sum<<" ";
        }cout<<endl;

    }

}

