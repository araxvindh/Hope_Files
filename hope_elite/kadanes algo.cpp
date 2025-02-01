#include<bits/stdc++.h>
using namespace std;

// 10
// 50 -100 20 30 -100 50 60 100 -200 -10
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sumCur=0, maxSum=0;
    for(int i=0;i<n;i++){
        sumCur+=arr[i];
        if (sumCur<0){
            sumCur=0;
        }
        maxSum=max(maxSum,sumCur);
    }
    cout<<maxSum;
}
