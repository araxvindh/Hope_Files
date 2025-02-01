#include<bits/stdc++.h>
using namespace std;
//5
//10 20 30 40 50
//105000

void reverse1(vector<int>&arr,int left,int right)
{
    while(left<right)
    {
        swap(arr[left],arr[right]);
        left++,right--;
    }
}


int main()
{
    int n,r;
    cin>>n>>r;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
       r=r%n;

    reverse1(arr,0,n-1);
    reverse1(arr,0,r-1);
    reverse1(arr,0,n-r-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
