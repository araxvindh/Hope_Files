#include<bits/stdc++.h>

using namespace std;


vector<int> merged(vector<int>&arr1 , vector<int>&arr2,int n ,int m)
{
    int pnt1=0;
    int pnt2=0;
    vector<int>arr3;
    while(pnt1<n && pnt2<m)
    {
        if(arr1[pnt1]==arr2[pnt2])
        {
            arr3.push_back(arr1[pnt1]);
            pnt1++;
            pnt2++;
        }
        else if(arr1[pnt1]>arr2[pnt2])
        {
            arr3.push_back(arr2[pnt2]);
            pnt2++;

        }else{
            arr3.push_back(arr1[pnt1]);
            pnt1++;
        }
    }
    while(arr1[pnt1]<n)
    {
        arr3.push_back(arr1[pnt1]);
        pnt1++;
    }
    while(arr2[pnt2]<m)
    {
        arr3.push_back(arr2[pnt2]);
        pnt2++;
    }


    return arr3;
}

int main ()
{

    int n,m;
    cin>>n>>m;

    vector<int>arr1(n);
    vector<int>arr2(m);

    for(int i=0;i<n;i++)
    {

        cin>>arr1[i];
    }

    for(int i=0;i<m;i++)
    {

        cin>>arr2[i];
    }

    vector<int> result = merged(arr1, arr2, n, m);

    cout << "Merged array: ";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    cout << endl;

    return 0;
}
/*
arr1 : 2 4 5 6 7 9 10 13
arr2 : 2 3 4 5 6 7 8 9 11 15

output:
merged array : 2 3 4 5 6 7 8 9 10 11 13 15
*/
