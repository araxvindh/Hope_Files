#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<char>> grid(n,vector<char>(n));

    for(int i=0;i<n;i++){
            string line;
            cin>>line;
        for(int j=0;j<n;j++){
             grid[i][j]= line[j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<grid[i][j]<<" ";
        }cout<<endl;
    }

    return 0;
}
/*
+ - + + + + + + + +
+ - + + + + + + + +
+ - + + + + + + + +
+ - - - - - + + + +
+ - + + + - + + + +
+ - + + + - + + + +
+ + + + + - + + + +
+ + - - - - - - + +
+ + + + + - + + + +
+ + + + + - + + + +
*/
