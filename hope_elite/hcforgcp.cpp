#include<bits/stdc++.h>
using namespace std;
int tofindHcf(int a ,int b){
    return (b==0)?a: tofindHcf(b,a%b);
}


int main(){
    int a,b;
    cin>>a>>b;
    cout<< tofindHcf(a,b);
}
//by using Euclidean Algorithm
