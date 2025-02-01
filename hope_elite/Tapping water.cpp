#include<bits/stdc++.h>

using namespace std;

int tappingWater(int n,vector<int>&height)
{
    int left =0;
    int right =n-1;

    int lmax= height[left];
    int rmax= height[right];
    int waterTapped=0;
    while(left< right)
    {
        if(lmax<=rmax)
        {
            waterTapped+= ( lmax-height[left]);
            lmax= max(lmax,height[left]);
        }else
        {

            waterTapped+=(rmax - height[right]);
            rmax=max(rmax,height[right]);
        }
    }return waterTapped;
}



int main()

{
    int n;

    cin>> n;

    vector<int>height(n);

    for(int i=0;i<n;i++)
    {

        cin>> height[i];
    }


    cout<< tappingWater(n,height);
}
