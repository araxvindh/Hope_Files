#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum;
    cin>> sum;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=0,right=0;
    int currSum=arr[0];
    int counter=0;
    while(left<=right && right <n){
         if(currSum ==sum){
              counter++;
              right++;
            currSum+=arr[right];
        }
        else if(currSum<sum){
             right++;
            currSum+=arr[right];
        }else  {
            currSum-=arr[left];
            left++;
        }
    }
    cout<<counter;

    return 0;
}
