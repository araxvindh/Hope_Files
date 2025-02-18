#include<bits/stdc++.h>
using namespace std;

void printValues(stack<int>st){
    if(!st.empty()){
        int top=st.top();
        st.pop();
        printValues(st);
        cout<<top<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    stack<int>st;
    int currval;
    for(int i=0;i<n;i++){
        cin>>currval;
        if(st.empty() || st.top()!=currval){
            st.push(currval);
        }else{
            st.pop();
        }
    }
       printValues(st);
    return 0;
}