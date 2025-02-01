#include <bits/stdc++.h>
using namespace std;

void wordBreak(vector<string>&words,string str,string output,int start)
{

    if(start==str.size())
    {
        cout<<trim(output)<<endl;
        return;
    }



    for(int i=start;i<str.size();i++)
    {
        string word=str.substr(start,i+1);

        if(find(words.begin(),words.end(),word)!=words.end())
        {
            wordBreak(words,str,output+word+" ",i+1);
        }
    }
}

int main() {
    string line;

    getline(cin,line);

    string s;
    cin>>s;

    vector<string>words;
    istringstream is(line);
    string word;

    while(is >> word)
    {
        words.push_back(word);
    }

    for(int i=0;i<words.size();i++)
    {
        cout<<words[i]<<" ";
    }

    wordBreak(words,s,"",0);
}

// logic :https://youtu.be/q85GqO2FbdI

// code  :https://youtu.be/c0UUcHNW4Ns
