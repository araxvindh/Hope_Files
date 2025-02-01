#include<bits/stdc++.h>
using namespace std;

int main(){
    string a;
    cin>>a;
    int result =0;
    for(int ind=0;a[ind];ind++){
        result=result|(1<<(a[ind]-'1'));
    }

   cout << (result==(1<<10)-1 ? "Yes" : "No") << endl;

    for(int shift=0;shift<31;shift++){
        if(result&(1<<shift)){
            cout<<"1";
        }else{
            cout<<"0";
        }
    }
}
