#include<bits/stdc++.h>

using namespace std;

int main()
{

    double n;
    cin>>n;

    if(n>=38.0)
    {
        cout<<1;
    }
    else if (n>=37.5 && n<38)
    {
        cout<<2;
    }
    else if(n<37.5)
    {

        cout<<3;
    }
}
