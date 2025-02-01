
#include<bits/stdc++.h>
using namespace std;


void toBinary(int val){
    if(val==0){
        return;
    } cout<< val%2;
    toBinary(val/2);

}

int main()
{
    int n;
    cin>>n;
    toBinary(n);

    return 0;
}
