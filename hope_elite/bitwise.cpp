#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int shift=0;shift<=30;shift++){
        if(n&(1<<shift)){
            cout<<"1";
        }else{
            cout<<"0";
        }
    }return 0;
}
