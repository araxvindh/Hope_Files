#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
string str;
cin>>str;
int n=str.size();
int counter=0;
int position=0;
int maxLen=0;
map<int,int>mpp;
mpp[counter]=position;
for(int i=0;i<n;i++)
{
    position++;
    if(str[i]-'A'>0)
    {
     counter++;
    }
    else
    {
        counter--;
    }

    if(mpp.find(counter)!=mpp.end())
    {
        maxLen=max(maxLen,position-mpp[counter]);
    }
    else
    {
        mpp[counter]=position;
    }
}
cout<<maxLen

}

// logic: https://youtu.be/R3KFda5KpEY
// code:  https://youtu.be/KCKZ2xkQgM0
