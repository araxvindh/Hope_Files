#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int len=a.size();
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a[i%len];
    }

}
