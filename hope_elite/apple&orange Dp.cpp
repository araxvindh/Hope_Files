#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
    vector<int>apple(n+1);
    vector<int>orange(n+1);
    apple[1]=orange[1]=1;
    for(int i=2;i<=n;i++){
        apple[i]=orange[i-1];
        orange[i]=apple[i-1]+orange[i-1];
    }
    cout<<(apple[n]+orange[n]);
}

/*
2
apple orange
orange apple
orange orange
*/
