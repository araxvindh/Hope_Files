#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
int n;
cin>>n;
string str;
vector<int>ascii(128,0);
for (int i=0;i<n;i++)
{
    cin>>str;
    for(auto it :str)
    {
        if(ascii[it]==i)
        {
            ascii[it]++;
        }
    }
}
for(int i=1;i<128;i++)
{
    if(ascii[i]==n)
    {
        cout<< static_cast<char>i;
    }
}

}
// logic:https://youtu.be/PReV0m4msCA
// code:https://youtu.be/K5NG2Rdtbu0
