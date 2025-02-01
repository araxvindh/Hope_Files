#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv)
{
    int n, s, t;
    cin >> n >> s >> t;

    vector<int> steps(s);
    vector<int> slip(t);
    for(int i = 0; i < s; i++)
    {
        cin >> steps[i];
    }
    for(int i = 0; i < t; i++)
    {
        cin >> slip[i];
    }

    vector<long long> ways(n + 1, 0);
    ways[0] = 1;

    for(int step = 1; step <= n; step++)
    {
        for(int ind = 0; ind < s; ind++)
        {
            if(step >= steps[ind])
            {
                ways[step] += ways[step - steps[ind]];
            }
        }

        if(find(slip.begin(), slip.end(), step) != slip.end())
        {
            int lastSlip = step - 1;
            while(lastSlip > 0 && find(slip.begin(), slip.end(), lastSlip) != slip.end())
            {
                lastSlip--;
            }
            if(lastSlip>0){
                ways[lastSlip] += ways[step];
            }
            ways[step] = 0;
        }
    }

    cout << ways[n];
}



/*
logic:https://youtu.be/WLHVXn0tlzk
code:https://youtu.be/N4nAZmHmFzA




*/
