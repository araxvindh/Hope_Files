#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    
    int n=s.size();
    
    stack<int>st;
    
    st.push(-1);
    
    int maxLen=0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            st.push(i);
        }
        else
        {
            st.pop();
            if(st.empty())
            {
                st.push(i);
            }
            else
            {
                maxLen=max(maxLen,i-st.top());
            }
        }
        
    }
    cout<<maxLen;
}