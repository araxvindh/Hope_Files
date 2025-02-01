#include <bits/stdc++.h>
using namespace std;

int main() {

    string a;
    cin>>a;
    int n=a.size();
    vector<int> lps(n);
    lps[0] = 0;
    int len = 0;
    for (int i = 1; i < n;) {
        if (a[i] == a[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << lps[i] << " ";
    }
}
