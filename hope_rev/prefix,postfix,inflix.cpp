#include<bits/stdc++.h>

using namespace std;

int priority(char str)
{
    if(str=='^')
    {
        return 3;
    }
    else if(str=='*' || str=='/')
    {
        return 2;
    }
    else if(str=='+'|| str=='-')
    {
        return 1;
    }
    else
    {
        return -1;
    }

}


string infixTopost(string&a)
{
    string ans="";
    stack<char>st;

    int n=a.size();
    int i=0;
    while(i<n)
    {
        if((a[i]>='A' && a[i]<='Z')||(a[i]>='a' && a[i]<='z')||a[i]>='0' && a[i]<'9')
        {
            ans+=a[i];
        }
        else if(a[i]=='(')
        {
            st.push('(');
        }
        else if(a[i]==')')
        {
            while(!st.empty() && st.top()!='(')
            {
                ans+=st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(!st.empty() && priority(a[i])<=priority(st.top()))
            {
                ans+=st.top();
                st.pop();
            }
            st.push(a[i]);
        }
        i++;
    }

    while(!st.empty())
    {

        ans+=st.top();
        st.pop();
    }

    return ans;
}





int main()
{

    //infix to postfix
    // a+b*(c^d-e) to  abcd ^e-*+

    string s ="a+b*(c^d-e)";
    cout<< infixTopost(s);
}
