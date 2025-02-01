#include<bits/stdc++.h>

using namespace std;

 string removeStars(string s) {
        stack<char>st;
        for( char ch : s){
            if(st.empty() || ch!='*'){
                st.push(ch);
            }else if(ch=='*'){
                st.pop();
            }
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }

          reverse(ans.begin(),ans.end());
          return ans;
}


int main()
{
    string a;
    cin>>a ;

    string star=removeStars(a);
    cout<< star;
}
