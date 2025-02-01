#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    // to check the n is power of 2

    if ((n&(n-1))==0){
        cout<< true;
    }
    else{
        cout<<false;
    }
}
