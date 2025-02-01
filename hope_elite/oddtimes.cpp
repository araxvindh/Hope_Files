#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int result=0,currval;
    for(int i=1;i<=n;i++){
        cin>> currval;
        result=result^currval;
    }
    cout<<result;
    return 0;
}
