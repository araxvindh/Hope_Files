#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    
    vector<int>res;
    unordered_set<string>mpp;
    
    for(int i=0;i<n;i++)
    {
        string temp="";
        for(int j=0;j<m;j++)
        {
           temp=temp+to_string(mat[i][j]); 
        }
        
        if(mpp.find(temp)!=mpp.end())
        {
            res.push_back(i);
        }
        else
        {
            mpp.insert(temp);
        }
    }
    
    if(res.size()==0) cout<<-1;
    for(auto it :res)
    {
        cout<<it+1<<" ";
    }
}


// 4 3
// 1 0 1
// 0 1 0
// 1 0 1
// 1 1 0

// output : 3
