#include<bits/stdc++.h>

using namespace std;

void toValue(int n)
{
    if(n==0){
        return;
    }
    cout<<n<<" ";
    toValue(n-1);


}

int main()
{
    int n;
    cin>>n;

    toValue(n);
}
