#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int maxPro=0;
int minBuy=arr[0];
for(int i=1;i<n;i++)
{
    if(arr[i]>minBuy)
    {
        maxPro=max(maxpro,arr[i]-minBuy);
    }
    else
    {
        minBuy=arr[i];
    }
}
cout<<maxPro;

}

//code : https://youtu.be/KwibR_lHWPY
//logic : https://youtu.be/tXf4Vml2FYM
