#include<bits/stdc++.h>

using namespace std;

int main()
{

    string a="aabbcqrqc";

    int n=a.size();

    char first=a[0];
    char last=a[n-1];

    int left=1;
    int right=n-2;

    while(left<=right)
    {
        if(a[left]!=first &&a[left]!=last)
        {
            left++;
        }
        else if(a[right]!=last && a[right]!=first)
        {
            right--;
        }
        else if (a[left]==first && a[right]==last)
        {
            break;
        }
    }

    string str="";
    set<char>s;
    str+=a[0];

    for(int i=left+1 ;i<right;i++)
    {
        s.insert(a[i]);
    }

    for(auto it :s)
    {
        str+=it;
    }
    str+=a[n-1];

    cout<<str;
}
