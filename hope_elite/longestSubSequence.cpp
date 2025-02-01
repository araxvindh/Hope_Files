#include<bits/stdc++.h>
using namespace std;
//input 10
// -7 1 3 2 4 10 9 8 11 15
//  1 2 3 3 4 5  5 5  6  7

int main(){
    int n;
    cin>> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>temp(n,1);
    for(int index=0;index<n;index++){
        for(int prev=0;prev<index;prev++){
            if(arr[index]>arr[prev] && temp[prev]>=temp[index]){
                temp[index]=temp[prev]+1;
            }
        }
    }
    int maxsub=arr[0];
    for(int i=1;i<n;i++){
        if(maxsub<temp[i]){
            maxsub=temp[i];
        }
    }
    cout<<maxsub;

}
