#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<int> num(10, 0);


    while (n != 0) {
        num[n % 10]++;
        n = n / 10;
    }

    int smallestOdd = -1;


    for (int i = 1; i <= 9; i += 2) {
        if (num[i] > 0) {
            smallestOdd = i;
            num[i]--;
            break;
        }
    }


    if (smallestOdd == -1) {
        cout << "no";
        return 0;
    }

    int start=0;
    for (int i = 9; i >= 0; i--) {
        if(start!=i)
        {
        while (num[i] > 0) {
            cout << i;
            num[i]--;
            start=100;
        }

        }
    }

    cout << smallestOdd;
    return 0;
}

//logic : https://youtu.be/4bhOb1kgbCM
//code : https://youtu.be/zRlyOhLxCro
