#include <bits/stdc++.h>

using namespace std;

void per(string&str,int left,int right,int x)
{
    if(left==right)
    {
        int curr =atoi(str);
        close=min(close,abs(curr-x));
        return;
    }
    for(int ind=left;ind<right;ind++)
    {
        swap(str[left],str[i]);
        per(str,left+1,right,x);
        swap(str[left],str[i]);
    }
}




int main(int argc, char** argv)
{
string str,x;
cin>>str>>x;
int n=str.size();
int close=atoi(str);
int x=atoi(x);
per(str,0,n-1,x);
cout<<close;
}


//logic: https://youtu.be/W04c2M5h5hI
//code: https://youtu.be/x0kCwTkeTG0
