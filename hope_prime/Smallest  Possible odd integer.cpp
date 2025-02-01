#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
long long n;
cin>>n;

vector<int>num(10,0);

while(n>0)
{
    num[n%10]++;
    n=n/10;
}
int largodd=-1;
for(int i=9;i>0;i-=2)
{
    if(num[i]>0)
    {
        largodd=i;
        num[i]--;
        break;
    }
}
if(largodd==-1)
{
    cout<<"no";
    return 0;
}
int start=1;
for(int i=1;i<=9;i++)
{
    if(num[i]>0)
    {
        cout<<i;
        num[i]--;
        start=0;
        break;
    }
}
for(int i=start;i<=9;i++)
{
    while(num[i]>0)
    {
        cout<<i;
        num[i]--;
    }
}
cout<<largodd;
return 0;

}

// code :https://youtu.be/gjW1nuv6tno
