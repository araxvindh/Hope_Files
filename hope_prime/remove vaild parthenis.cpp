#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    int bal=0;
    for(auto it :s)
    {
        if(it=='(')
        {
            bal++;
        }
        else if (it==')')
        {
            bal--;
        }
        
        if(bal<0) return false;
    }
    
    return bal==0;
}

int main() {
    string s;
    cin>>s;
    
    vector<string>res;
    unordered_set<string>vis;
    queue<string>q;
    
    q.push(s);
    vis.insert(s);
    bool flag =false;
    while(!q.empty())
    {
        string curr=q.front();
        q.pop();
        
        if(isValid(curr))
        {
            res.push_back(curr);
            flag=true;
        }
        if(flag) continue;
            for(int i=0;i<curr.size();i++)
            {
                if(curr[i]!='(' && curr[i]!=')')
                {
                    continue;
                }
                
                string s1=curr.substr(0,i)+curr.substr(i+1);
                
                if(vis.find(s1)==vis.end())
                {
                    vis.insert(s1);
                    q.push(s1);
                }
            }
        
    }
    for(auto it :res)
    {
        cout<<it<<endl;
    }
}