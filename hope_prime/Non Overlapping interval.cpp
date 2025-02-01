#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin>>n;

    vector<vector<int>>inter(n,vector<int>(2));

    for(int i=0;i<n;i++)
    {
        cin>>inter[i][0] >>inter[i][1];
    }

    sort(inter.begin(),inter.end());

    int end=arr[0][1];
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        if(inter[i][0]<end)
        {
            cnt++;
            end=min(end,inter[i][1]);
        }
        else
        {
            end=arr[i][1];
        }
    }
    cout<<cnt;
}
