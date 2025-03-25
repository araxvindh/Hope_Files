#include <bits/stdc++.h>
using namespace std;

int dp[1001][1001]; // Adjust size as needed

int find(int n, int k) {
    if (n == 0) return 0;
    if (k == 0) return INT_MAX - 1; // To prevent integer overflow

    if (dp[n][k] != -1) return dp[n][k];

    int notTake = find(n, k - 1);
    int take = INT_MAX;

    if (n >= k) {
        take = 1 + find(n - k, k);
    }

    return dp[n][k] = min(notTake, take);
}

int main() {
    int q;
    cin >> q;

    while (q-- > 0) {
        int n, k;
        cin >> n >> k;

        memset(dp, -1, sizeof(dp)); // Reset memoization table for each test case
        int ans = find(n, k);

        // If no valid way found, return -1 instead of INT_MAX
        cout << (ans >= INT_MAX - 1 ? -1 : ans) << endl;
    }

    return 0;
}
