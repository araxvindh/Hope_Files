#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int noOfAnt=1,startPos=arr[0],currPos=arr[0];

    for(int i=0;i<=n;i++){
        if(arr[i]<=startPos+k){
            currPos=arr[i];
        }else if(arr[i]<=currPos+k){
        }else{
             noOfAnt++;
            startPos=arr[i];
            currPos=arr[i];
        }


        }cout<<noOfAnt;
    }

// 2 4 5 6 9 11 15
// k=2
//

