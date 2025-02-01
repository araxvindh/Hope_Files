#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
int n;
cin>>n;
int k;
int res=0;
for(int i=0;i<n;i++)
{
    cin>>k;
    res=res^k;
}
cout<<res;
}
//logic :https://youtu.be/SuXK6X4JgbQ
//code  :https://youtu.be/W-8zZe1KQQ4
