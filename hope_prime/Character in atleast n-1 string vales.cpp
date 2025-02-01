#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
int n;
cin>>n;
string str;
vector<int>ascii(128,0);

for(int i=0;i<n;i++)
{
    cin>>str;
    set<char>curr(str.begin(),str.end());
    for(auto it : curr)
    {
        if((ascii[it]==i || ascii[it]==i-1))
        {
            ascii[it]++;
        }
    }
}
for(int i =1;i<128;i++)
{
    if(ascii[i]==n || ascii[i]==n-1)
    {
        cout<< static_cast<char>(i);
    }
}

}
// logic and code :https://youtu.be/nTkVZAdv0ok
