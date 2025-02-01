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

int profit=0;

for(int i=1;i<n;i++)
{
    if(arr[i]>arr[i-1])
    {
        profit+=arr[i]-arr[i-1];
    }
}
cout<<profit;

}

//logic:https://youtu.be/ISwjfVrNOWQ
//code:https://youtu.be/JQaNfHTeYv8
