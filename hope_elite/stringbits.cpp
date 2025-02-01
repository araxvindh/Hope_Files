#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    int result =0;
    for(int ind=0;a[ind];ind++){
        result=result|(1<<(a[ind]-'a'));
    }
    cout<<(result==(1<<26-1))?'yes':'no';

    cout<<endl;
    for(int shift=0;shift<31;shift++){
        if(result&(1<<shift)){
            cout<<"1";
        }else{
            cout<<"0";
        }
    }
}
