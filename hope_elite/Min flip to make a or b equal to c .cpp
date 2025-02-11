#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    
    int shift=0;
    int cnt=0;
    int maxVal =max(a,max(b,c));
    while((1<<shift)<=maxVal)
    {
        int abit =(1&(a>>shift));
        int bbit=(1&(b>>shift));
        int cbit=(1&(c>>shift));
        
        if(cbit==1)
        {
            if(abit==0 && bbit==0)
            {
                cnt++;
            }
        }
        else
        {
            if(abit==1 && bbit==1)
            {
                cnt+=2;
            }
            else if(abit==1 || bbit==1)
            {
                cnt++;
            }
        }
        shift++;
    }
    
    cout<<cnt;
}