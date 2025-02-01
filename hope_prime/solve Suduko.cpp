#include <bits/stdc++.h>
using namespace std;
class Cell
{
    public:
        int row;
        int col;

        Cell(int r ,int c) : row(r),col(c) {}
};



Cell getUnfilled(vector<vector<int>>&mat,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(mat[i][j]==0)
            {
                return Cell(r,c);
            }
        }
    }
    return Cell(-1,-1);
}

bool solve(vector<vector<int>>&mat,vector<int>&rflag,vector<int>&cflag,vector<int>&sflag,int size)

{
    Cell toFill =getUnfilled(mat,size);
    if(toFill.row==-1 && toFill.col==-1)
    {
        return true;
    }

    for(int dig=1;dig<=9;dig++)
    {
        int subMix=(toFill.row/3)*3+toFill.col/3;

        if(rflag[toFill.row] &(1<<dig)==0 && cfalg[toFill.col]&(1<<dig)==0 && sflag[subMix]&(1<<dig)==0)
        {
            mat[toFill.row][toFill.col]=dig;
            rflag[toFill.row]=(1<<dig);
            cflag[toFill.col]=(1<<dig);
            sflag[subMix]=(1<<dig);

            if(solve(mat,rflag,cflag,sflag,size)
            {
                return true;
            }
            else
            {
                mat[toFill.row][toFill.col]=0;
                rflag[toFill.row]^=(1<<dig);
                cflag[toFill.col]^=(1<<dig);
                sflag[subMix]^=(1<<dig);
            }
        }
    }
    return false;
}


int main() {
    int R=9;
    int C=9;

    vector<vector<int>>mat(R,vector<int>(C));
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            cin>>mat[i][j];
        }
    }

    vector<int>rFlag(R,0);
    vector<int>cFlag(C,0);
    vector<int>sFlag(9,0);

    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(mat[i][j]!=0)
            {
                int sMid=(i/3)*3+j/3;
                int dig=mat[i][j];
                rFlag[i]=(1<<dig);
                cFlag[j]=(1<<dig);
                sFlag[sMid]=(1<<dig);
            }
        }
    }
    if(solve(mat,rFlag,cFlag,sFlag,R))
    {
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
            {
                cout<<mat[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    else
    {
        cout<<"Not Solved";
    }


}

// logic :https://youtu.be/ziChV7_MFos

// code  :https://youtu.be/2MWRITy9_Ac
