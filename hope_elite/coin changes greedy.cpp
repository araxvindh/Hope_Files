#include<bits/stdc++.h>

using namespace std;
//arr={1,2,5,10,20,50,100,500,1000}
//sum=49

int main()
{
    int n ,sum;
    cin>>n>>sum;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cnt=0;
    for(int i =n-1;i>=0;i--){
        while(sum>=arr[i])
        {
            sum-=arr[i];
            cout<< arr[i]<<" ";
        }
    }
}


