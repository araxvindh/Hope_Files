#include<bits/stdc++.h>
using namespace std;

int main() {
    int r=9;
    int c=9;
   vector<int>row(9,1);
   vector<int>col(9,1);
   vector<int>subMat(9,1);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            int digit;
            cin>>digit;
            row[i]|=(1<<digit);
            col[j]|=(1<<digit);
            subMat[(i/3)*3+(j/3)]|=(1<<digit);
        }
    }

    int val=(1<<10)-1;
    for(int ind=0;ind<9;ind++)
    {
        if(row[ind]==val || col[ind]==val || subMat[ind]==val)
        {
            cout<<"INVALID";

        }

    }
    cout<<"VALID";
}

//logic:https://youtu.be/wVnvzXClo8Y
// code:https://youtu.be/479p377yrE4
