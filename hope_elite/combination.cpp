#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int len=str.size();
    for(int ctr =1;ctr<(1<<len);ctr++){
        for(int shift =0;shift<len;shift++){
            if(ctr&(1<<shift)){
                cout<< str[shift];
            }
        }
        cout<<endl;
    }return 0;
}
