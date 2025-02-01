// to print primes utpo to n by using sieve of eratothenes

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>arr(n,1);
    for(int i=2 ; i<=n; i++)
    {
        if(arr[i]==1)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                arr[i]=0;
            }
        }

    }

    for(int i=2;i<=n;i++){
        if(arr[i]==0){
            cout<< i<<" ";
        }
    }
}
