#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int result=0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>> arr[i];
        result=result^arr[i];
    }
    int shift=0;
    while(!result&(1<<shift)){
        shift++;
    }
    int onesGrp=0,zeroesGrp=0;
    for(int i=0;i<n;i++){
        if(arr[i]&(1<<shift)){
            onesGrp=onesGrp^arr[i];
        }else{
            zeroesGrp=zeroesGrp^arr[i];
        }
    } cout<<onesGrp <<" ";
    cout<<zeroesGrp;
    return 0;
}
