#include <bits/stdc++.h>
using namespace std;

int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
    int n = fruits.size();

    // Sort both arrays to optimize placement
    sort(fruits.begin(), fruits.end());
    sort(baskets.begin(), baskets.end());

    int i = 0, j = 0; // Two pointers
    while (i < n && j < n) {
        if (fruits[i] <= baskets[j]) {
            // Place the fruit in the basket
            i++;
        }
        // Move to the next basket in any case
        j++;
    }
    return n - i; // Unplaced fruits
}

int main() {
    int n;
    cin >> n;

    vector<int> fruits(n);
    vector<int> baskets(n);

    for (int i = 0; i < n; i++) {
        cin >> fruits[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> baskets[i];
    }

    cout << numOfUnplacedFruits(fruits, baskets) << endl;
}
