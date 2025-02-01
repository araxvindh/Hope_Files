#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }

    stack<int>st;
    int maxi=0;
    int pse;
    int elem=0;
    int nse;
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && arr[st.top()] > arr[i])
        {
            elem=arr[st.top()];
            st.pop();
            nse=i;
            pse=(st.empty())?-1:st.top();
            maxi=max(elem*(nse-pse-1),maxi);
        }
          st.push(i);
    }

    while(!st.empty())
    {
        nse=n;
        elem=arr[st.top()];
        st.pop();
        pse=(st.empty())?-1:st.top();
        maxi=max(elem*(nse-pse-1),maxi);
    }
    cout<<maxi;

}

/*
Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram
Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units

8
3 2 10 11 5 10 6 3


dry

stack
0 val 3

when 3>2;

after pop() st is empty

3*(1-(-1)-1)=3

stack

1 val 2
2 val 10
3 val 11

then 4 it will be 5

11*(4-2-1)=11

then 10 > 5

10(4-1-1)=20

stack
1 val 2
4 val 5
5 val 10

then 10> 6

10*(6-4-1)=10

stack
1 val 2
4 val 5
6 val 6

then 6>3

6(7-4-1)=12

then 5>3
5(7-1-1)= 25//
*/
