#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{

    int n,m;
    cin>>n>>m;

    priority_queue<int>bq,wq;
    int curr;
    for(int i=0;i<n;i++)
    {
        cin>>curr;
        bq.push(curr);
    }

    for(int i=0;i<m;i++)
    {
        cin>>curr;
        wq.push(curr);
    }
    ll sum=0;
    while(!bq.empty() && !wq.empty())
    {
        if((bq.top()>0 && wq.top() >0) ||(bq.top()<=0 && wq.top()>(-bq.top())))
           {
               sum+=bq.top();
               sum+=wq.top();

               bq.pop();
               wq.pop();
           }
           else
            {

                break;
            }
    }

    while(!bq.empty() &&  bq.top()>0)
    {
        sum+=bq.top();
        bq.pop();
    }
    cout<<sum;
}
