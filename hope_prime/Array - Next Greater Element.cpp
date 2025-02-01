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

    // Start from the last element
    for (int i = n - 1; i >= 0; i--) {
        // Pop elements from stack while the top is less than or equal to arr[i]
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        // If stack is empty, no greater element to the right; otherwise, the top is the next greater
        if (st.empty()) {
            result[i] = -1; // or use a sentinel value like -1
        } else {
            result[i] = st.top();
        }

        // Push the current element onto the stack
        st.push(arr[i]);
    }

    // Print the result
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
