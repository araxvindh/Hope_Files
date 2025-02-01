#include<bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin>>str;
    int n=str.size();
    vector<vector<bool>>mat(n,vector<bool>(n,false));
    int maxLen=1;
    for(int i=0;i<n;i++)
    {

        mat[i][j]=true;
    }



    for(int i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])
        {
            mat[i][i+1]=true;
            maxLen=2;
        }
    }

    for(int len=3;len<=n;len++)
    {
        for(int ind=0;ind<n-len;ind++)
        {
            if(str[ind]==str[ind+len-1] && mat[ind+1][ind+len-2])
            {
                mat[ind][ind+len-1]=true;

                maxLen=max(maxLen,len);
            }
        }
    }
    cout<<maxLen;


}

// logic : https://youtu.be/ASy6lrQm0C8

// code : https://youtu.be/tMCQB5r2swY
