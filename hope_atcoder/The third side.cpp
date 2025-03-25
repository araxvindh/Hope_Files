#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;

    while(n-->0)
    {
        int arrSize;
        cin>>arrSize;
        int sum=0;
        int ele;
        for(int i=0;i<arrSize;i++)
        {
            cin>>ele;
            sum+=ele;
        }

        cout<<sum-arrSize+1<<endl;
    }
}
