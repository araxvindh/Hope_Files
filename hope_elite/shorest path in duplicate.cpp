#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
  
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
  
    unordered_map<int, int> mpp;
    int minl = INT_MAX;
  
    for (int i = 0; i < n; i++) {
        if (mpp.find(arr[i]) != mpp.end()) {
            minl = min(minl, i - mpp[arr[i]]);  // ✅ Fixed missing semicolon
        }
        mpp[arr[i]] = i;
    }
  
    if (minl == INT_MAX) {  // ✅ Fixed comparison (== instead of =)
        cout << -1;
    } else {
        cout << minl;
    }

    return 0;
}


// from at coder 
