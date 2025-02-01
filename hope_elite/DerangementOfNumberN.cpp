#include<bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin >> n;

   vector<int> dp(n+1);

   // Correcting the base case
   dp[0] = 1; // There's 1 way to derange 0 elements (empty set).
   dp[1] = 0; // No derangement possible for 1 element.
   dp[2] = 1; // There's exactly 1 derangement for 2 elements.

   for(int i = 3; i <= n; i++)
   {
       dp[i] = (i - 1) * (dp[i - 1] + dp[i - 2]);
   }

   cout << dp[n];

   return 0;
}


/*
Derangement of a number refers to a permutation of the elements of a set, such that no element appears in its original position.

Example:
Let's say we have 3 elements {1, 2, 3}
The derangements of the elements are:
{2, 3, 1}
{3, 1, 2}

f(n) = (n-1)*(f(n-1)+f(n-2))

 */
