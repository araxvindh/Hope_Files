#include<bits/stdc++.h>

using namespace std;
int maxSatisfaction(vector<int>& satisfaction) {
        int n=satisfaction.size();
        vector<vector<int>>mat(n+1,vector<int>(n+1,0));
        sort(satisfaction.begin(),satisfaction.end());
        int maxlen=0;
        for(int time=1;time<=n;time++)
        {
            for(int dish=time;dish<=n;dish++)
            {
                mat[dish][time]=mat[dish-1][time-1]+(time*satisfaction[dish-1]);
                maxlen=max(maxlen,mat[dish][time]);
            }
        }
        return maxlen;
}
int main()
{
  int n;
  vector<int>satisfaction(n);
  for(int i=0;i<n;i++)
  {

      cin>>satisfaction[i];
  }
    cout << maxSatisfaction(satisfaction);
}

/*
leetcode 1402

sloved using dp 2d matrix


dryrun

  0    0    0    0    0    0
  0   -9    0    0    0    0
  0   -8  -25    0    0    0
  0   -1  -10  -28    0    0
  0    0   -1  -10  -28    0
  0    5   10   14   10   -3


*/
