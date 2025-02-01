#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int>jumps(n);

    if(n==1)
    {
        cout<<0;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>jumps[i];
    }

    int jump=1;
    int maxReach=jumps[0];
    int steps=jumps[0];

    for(int ind=1;ind<n;ind++)
    {

        if(ind==n-1)
        {
            break;
        }
        if((ind+jumps[ind])>maxReach)
        {
            maxReach=ind+jumps[ind];
        }

        steps--;
        if(steps==0)
        {
            jump++;
            steps=maxReach-ind;
        }


    }
    cout<<jump;
}

//logic :https://youtu.be/JUH4Ayb373g
// Code :https://youtu.be/Yhxzu9S75Bw
