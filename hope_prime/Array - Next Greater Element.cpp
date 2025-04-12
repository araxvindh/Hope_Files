#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    stack<int> st;
    vector<int> result(n);

    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if (st.empty()) {
            result[i] = -1; 
        } else {
            result[i] = st.top();
        }


        st.push(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
7
2 1 5 15 10 6 20

output:
5 5 15 20 20 20 20

logic - https://youtu.be/0CuD-TV7cvw
code - https://youtu.be/gWEDQFPwYJc
*/
