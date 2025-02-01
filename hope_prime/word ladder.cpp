
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    string start,end;
    cin>>n>>start>>end;
    vector<string>wordList(n);

    for(int i=0;i<n;i++)
    {
        cin>>wordList[i];
    }

    unordered_set<string>st(wordList.begin(),wordList.end());

    queue<pair<string,int>>q;
    q.push({start,1});
    st.erase(start);
    int ans=0;
    while(!q.empty())
    {
        string word=q.front().first;
        int step=q.front().second;
        q.pop();
        if(word==end) ans=step;

        for(int i=0;i<word.size();i++)
        {
            char org=word[i];
            for(char ch='a';ch<='z';ch++)
            {
                word[i]=i;

                if(st.find(word)!=st.end())
                {
                    st.erase(word);
                    q.push({word,step+1});
                }
                word[i]=org;
            }
        }

    }
    cout<<ans;
    return 0;
}
