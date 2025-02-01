#include<bits/stdc++.h>
using namespace std;


void printVal(int val){
    if(val==0){
        return;
    }
    printVal(val-1);
    cout<<val-1;

}


int main()
{
    int n;
    cin>>n;
    printVal(n);

    return 0;
}
