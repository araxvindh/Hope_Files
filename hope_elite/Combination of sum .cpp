#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++)
    {
        cin>> arr[i];
    }

    int target;
    cin>>target;
    int counter=0;
    for(int ctr =1;ctr<(1<<n);ctr++)
    {
        int currsum=0;
        for(int shift =0;shift<n;shift++)
        {
            if (ctr &(1<<shift))
            {
                currsum+=arr[shift];
                cout<< arr[shift] <<"";
            }
        } cout<<endl;
        if(target==currsum)
        {
            counter++;
        }
    }
    cout<<counter;

}

//3
//123
//3
/*

if n=5 (2**5=32)
    1   00001
    2   00010
    3   00011
    4
    5
    6
    7
    8
    9
*/
