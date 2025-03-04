#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, q;
    cin >> p >> q;

    vector<int> pigeon(p + 1);
    vector<int> ncount(p + 1, 1);
    int mulctr = 0;

    for (int i = 0; i <= p; i++) {
        pigeon[i] = i;
    }

    while (q-- > 0) {
        int qtype;
        cin >> qtype;
        if (qtype == 1) {
            int np, dest;
            cin >> np >> dest;
            int curr = pigeon[np];

            if (ncount[curr] == 2) mulctr--; 
            ncount[curr]--; 

            pigeon[np] = dest;
            ncount[dest]++;
            
            if (ncount[dest] == 2) mulctr++; 
        } else {
            cout << mulctr << '\n';
        }
    }
}
