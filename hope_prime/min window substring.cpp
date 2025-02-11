#include <bits/stdc++.h>
using namespace std;

int main() {
    string a,b;
    cin>>a>>b;
    
    int n=a.size();
    int m=b.size();
    
    int left=0;
    int right=0;
    int cnt=0;
    int s=-1;
    int minLen=INT_MAX;
    vector<int>mpp(256,0);
    for(int i=0;i<m;i++)
    {
        mpp[b[i]]++;
    }
    
    while(right<n)
    {
        
        if(mpp[a[right]]>0)
        {
            cnt++;
        }
        mpp[a[right]]--;
        
        while(cnt==m)
        {
            if(right-left+1 <minLen)
            {
                minLen=right-left+1;
                s=left;
            }
            
            mpp[a[left]]++;
            
            if(mpp[a[left]]>0)
            {
                cnt--;
            }
            left++;
        }
        right++;
    }
    
   if(s==-1)
   {
       cout<<"-1";
   }
   else
   {
       cout<< a.substr(s,minLen);
   }
    
}