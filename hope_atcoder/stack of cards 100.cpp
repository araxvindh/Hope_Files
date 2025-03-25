#include<bits/stdc++.h>

using namespace std;

int main()

{

    int n;
    cin>>n;

    stack<int>st;
    int qt,val;
    for(int i=0;i<n;i++)
    {
        cin>>qt;

        if(qt==2)
        {
            if(st.empty())
            {
                cout<<0<<endl;
            }else
            {
                cout<<st.top()<<endl;
                st.pop();
            }
        }
        else if(qt==1)
        {
            cin>>val;
            st.push(val);
        }
    }
}
