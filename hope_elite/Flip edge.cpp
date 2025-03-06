#include <bits/stdc++.h>
using namespace std ;

#define ll long long int
int main() {
    int N , E , C ;
    cin>>N>>E>>C ;
    ll INF = 20000000000000000009 ;
    vector<vector<pair<ll,ll>>> g(N*2+1);
    vector<ll> cost(N*2+1,INF);
    for(int v=1;v<=N;v++)
    {
        g[v].push_back(make_pair(v+N,C));
        g[v+N].push_back(make_pair(v,C));
    }
    while(E-- > 0)
    {
        int src,dest ;
        cin>>src>>dest ;
        g[src].push_back(make_pair(dest,1));
        g[dest+N].push_back(make_pair(src+N,1));
    }
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> q;
    q.push(make_pair(0,1));
    cost[1] = 0 ;
    while(!q.empty())
    {
        ll currCost = q.top().first;
        ll currNode = q.top().second;
        q.pop();
        for(pair<ll,ll> p : g[currNode]){
            ll nxtNode = p.first;
            ll nxtCost = p.second ;
            if(cost[nxtNode]>currCost+nxtCost){
                q.push(make_pair((currCost+nxtCost),nxtNode));
                cost[nxtNode] = currCost+nxtCost ;
            }
        }
    }
    cout<<min(cost[N],cost[2*N]);
    return 0;
}