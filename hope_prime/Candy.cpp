#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>candy(n);
    for(int i=0;i<n;i++)
    {
        cin>>candy[i];
    }

    //slope method

    int ind=1;
    int sum=1;

    while(ind<n)
    {
        if(candy[ind]==candy[ind-1])
        {
            sum++;
            ind++;
            continue;
        }

        int peak=1;
        while(candy[ind]>candy[ind-1] && ind<n)
        {
            peak++;
            ind++;
            sum+=peak;
        }
        int down=1;
        while(candy[ind]<candy[ind-1] && ind<n)
        {
            ind++;
            sum+=down;
            down++;
        }

        if(down>peak)
        {
            sum+=down-peak;
        }

    }
    cout<<sum;
}
