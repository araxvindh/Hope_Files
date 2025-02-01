#include<bits/stdc++.h>
using namespace std;
//abcdef
//abacus
//3              if same (i-1,j-k)+1
///  0 n o s e
///0 0 0 0 0 0
///n 0 1 1 1 1
///e 0 1 1 2 2
///c 0 1 1 2 2
///k 0 1 1 2 2
int main()
{
    string a,b;
    cin>>a>>b;
    int n=a.size()+1;
    int m=b.size()+1;

    vector<vector<int>>mat(n,vector<int>(m,0));
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i-1]==b[j-1]){
                mat[i][j]= mat[i-1][j-1] +1;
            }else{
                mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
            }
        }
    }
    cout<<mat[n-1][m-1];
}
