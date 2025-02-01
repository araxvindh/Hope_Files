#include <bits/stdc++.h>
using namespace std;

string shortestPalindrome(string key) {
    string key1 = key;
    reverse(key1.begin(), key1.end());
    string str = key + "_" + key1;
    vector<int> lps(str.size(), 0);

    int strckIndex = 0;
    for (int index = 1; index < str.size(); ) {
        if (str[index] == str[strckIndex]) {
            strckIndex++;
            lps[index] = strckIndex;
            index++;
        } else {
            if (strckIndex == 0) {
                index++;
            } else {
                strckIndex = lps[strckIndex - 1];
            }
        }
    }

    // Now add the unmatched part of key1 (the reversed part) to key to form the shortest palindrome
    string res = key1.substr(0, key.size() - lps[str.size()-1]);
    return res + key; // return the shortest palindrome
}

int main() {
    string key;
    cin >> key;

    cout << shortestPalindrome(key) << endl;
    return 0;
}
