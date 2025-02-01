#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    map<int,int>mpp;
    mpp[0]=-1;
    int val=0;
    int maxlen=0;
    for(int i=1;i<a.size();i++){
        if(a[i]=='1'){
            val++;
        } else{
            val--;
        }
        if(mpp.find(val)!=mpp.end()){
            int currLen =i- mpp[val];
            maxlen=max(maxlen,currLen);
        }else{
            mpp[val]=i;
        }
    }
    cout<<maxlen;

}
