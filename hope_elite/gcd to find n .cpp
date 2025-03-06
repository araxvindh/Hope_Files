#include<bits/stdc++.h>
using namespace std;

int tofindHcf(int a ,int b){
    return (b==0)?a: tofindHcf(b,a%b);
}


int main()
{

    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }

    int gcd=arr[0];

    for(int i=1;i<n;i++)
    {

        gcd=tofindHcf(gcd,arr[i]);
    }


    cout <<gcd;
}
