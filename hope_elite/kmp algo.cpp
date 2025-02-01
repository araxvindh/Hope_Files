#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str="aaaaaab";
    string key ="aaaaab";
    vector<int>lps(key.size());
    lps[0]=0;
    int streak=0;
    int comp=0;
    for(int index=1; index<key.size();index++)
    {
        if(key[index]==key[streak])
        {
            lps[index]=streak+1;
            streak++;
        }
        else
        {
            lps[index]=0;
            streak=0;
        }

    }
    int keyIndex=0;
    int cnt=0;
    for(int index=0;index< str.size();){
        if(str[index]==key[keyIndex]){
            index++;
            keyIndex++;
            if(keyIndex==key.size()){
                cnt++;
                keyIndex=0;
            }

        }else{
            if(keyIndex==0){
                index++;
            }else{
                keyIndex=lps[keyIndex-1];
            }
        }
    }
    for(int i=0;i<key.size();i++){
        cout<<lps[i]<<" ";
    }
    cout << endl;
    cout<<cnt;
    return 0;
}

// aaaaaab
// aaaaab
//lps =[0,1,2,3,4,0]
//at index 5 it will not match with the key
//keyIndex= lps [keyIndex-1]
