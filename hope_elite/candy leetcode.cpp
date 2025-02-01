#include<bits/stdc++.h>

using namespace std;

int candy(vector<int>&arr,int n)
{

    vector<int>dup(n,1);

    for(int i=0;i<n-1;i++)
    {

        if(arr[i]<arr[i+1])
        {
            dup[i+1]=dup[i]+1;
        }
    }
    for(int i= n-2;i>=0;i--)
    {

        if(arr[i]>arr[i+1])
        {

            dup[i]=max(dup[i+1]+1,dup[i]);
        }
    }

    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum+=dup[i];
    }
    return sum;
}



int main()
{

    int n;
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    cout<< candy(arr,n);
}


/*

https://leetcode.com/problems/candy/description/

There are n children standing in a line. Each child is assigned a rating value given in the integer array ratings.

You are giving candies to these children subjected to the following requirements:

Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.
Return the minimum number of candies you need to have to distribute the candies to the children.



Example 1:

Input: ratings = [1,0,2]
Output: 5
Explanation: You can allocate to the first, second and third child with 2, 1, 2 candies respectively.
Example 2:

Input: ratings = [1,2,2]
Output: 4
Explanation: You can allocate to the first, second and third child with 1, 2, 1 candies respectively.
The third child gets 1 candy because it satisfies the above two conditions.


Constraints:

n == ratings.length
1 <= n <= 2 * 10^4
0 <= ratings[i] <= 2 * 10^4


Solution:

We can solve this problem by using two pass approach.
In the first pass, we will assign candies to the children based on the ratings.
We will start from the left and assign candies to the children based on the ratings.
If the rating of the current child is greater than the previous child, then we will assign one more candy to the current child than the previous child.
In the second pass, we will start from the right and assign candies to the children based on the ratings.
If the rating of the current child is greater than the next child, then we will assign one more candy to the current child than the next child.
Finally, we will return the sum of all the candies assigned to the children.


Step 1 : fill with 1
                        2 3 4 3 2 1
                        1 1 1 1 1 1
Step 2 : along the increasing order, assign candies from left to right
                        2 3 4 3 2 1
                        1 2 3 1 1 1
Step 3 : along the increasing order, assign candies from right to left
                        2 3 4 3 2 1
                        1 2 4 3 2 1, check for max of left to right values, before assigning candies from right to left
Step 4 : return sum of all candies
                        1+2+4+3+2+1 = 13

 */
