#include<bits/stdc++.h>

using namespace std;

string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        int left=0;
        int right=0;
        int minLen=INT_MAX;
        int counter=0;
        int s1=-1;
        vector<int>mpp(256,0);
        for(int i=0;i<m;i++)
        {
            mpp[t[i]]++;
        }

        while(right<n)
        {
            if(mpp[s[right]]>0)
            {
                counter++;
            }
            mpp[s[right]]--;
            while(counter==m)
            {
                if(right-left+1<minLen)
                {
                    minLen=right-left+1;
                    s1=left;
                }
                mpp[s[left]]++;
                if(mpp[s[left]]>0)
                {
                    counter--;
                }
                left++;

            }
            right++;
        }
        return (s1==-1)?"":s.substr(s1,minLen);
    }






int main()
{

    string s,t;
    cin>>s>>t;

    string a = minWindow(s,t);

    cout<<a;
}
