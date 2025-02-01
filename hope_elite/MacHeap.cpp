#include<bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>&num1,vector<int>&num2,int l1,int l2){
    int total=((l1+l2))/2;
    int left1=0;
    int left2=0;
    priority_queue<int>maxH;
    while(maxH.size()<=total){
        if(left1<l1 && left2<l2){
            if(num1[left1]<=num2[left2]){
                cout<<num1[left1] <<" ";
                maxH.push(num1[left1]);
                left1++;
            }else{
                 cout<<num2[left2] <<" ";
                maxH.push(num2[left2]);
                left2++;
            }
            }else if (left1<l1){
                 cout<<num1[left1] <<" ";
                maxH.push(num1[left1]);
                left1++;
            }
             else if(left2<l2){
                  cout<<num2[left2] <<" ";
                maxH.push(num2[left2]);
                left2++;
            }
        }

        if((l1+l2)%2==0)
        {

            int top1=maxH.top();
            cout<<top1;
            maxH.pop();
            int top2=maxH.top();
            maxH.pop();
            cout<<top2;
            return (top1+top2)/2.0;
        }
        else{
            return maxH.top();
        }
    }




int main()
{

    int n,m;
    cin>>n>>m;
    vector<int>num1(n);
    vector<int>num2(m);
    for(int i=0;i<n;i++){
        cin>>num1[i];
    }
    for(int i=0;i<m;i++){
        cin>>num2[i];
    }
    cout<< findMedianSortedArrays(num1,num2,n,m);
}
