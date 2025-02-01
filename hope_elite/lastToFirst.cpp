#include<bits/stdc++.h>
using namespace std;
//n=5
// apple elephant tiger rig garland
//2
//elephant,tiger,rig,garland

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<string>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<char,int>mpp;
    string str=arr[k];
    cout<< arr[k]<<" ";
    for(int i=0;i<n;i++){
        mpp[arr[i][0]]=i;
    }
    while(mpp.find(str[str.size() - 1]) != mpp.end()){
        int y=mpp[str[str.size()-1]];
        cout<<arr[y]<<" ";
        str=arr[y];
    }
}
