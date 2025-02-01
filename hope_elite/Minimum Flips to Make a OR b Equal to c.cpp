#include<bits/stdc++.h>

using namespace std;


 int minFlips(int a, int b, int c) {
        int maxVal=max(max(a,b),max(b,c));
        int shift =0;
        int cnt=0;
        while((1<<shift)<=maxVal)
        {
            int abit=(1&(a>>shift));
            int bbit=(1&(b>>shift));
            int cbit=(1&(c>>shift));

            if(cbit==1)
            {
                if(abit==0 && bbit==0)
                {
                    cnt+=1;
                }
            }
            else
            {
                if(abit==1 && bbit==1)
                {
                    cnt+=2;
                }else if(abit==1 || bbit==1)
                {
                    cnt+=1;
                }
            }
            shift++;
        }
        return cnt;
    }
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    cout<<minFlips(a,b,c);

}
