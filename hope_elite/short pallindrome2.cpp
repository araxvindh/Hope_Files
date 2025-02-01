#include<bits/stdc++.h>

using namespace std;

string shortPallindrome(string str)
{
    int prefixSum=0;
     if (equal(str.begin(), str.begin() + str.size()/2, str.rbegin())) {
        return str;
    }

    for(int index=str.size()-1; index>0; index--)
    {
        if (str[index]==str[prefixSum])
        {
            prefixSum++;

        }
    }
    string k = str.substr(prefixSum);
    string k1=k;
    reverse(k1.begin(), k1.end());
    return k1 + shortPallindrome(str.substr(0,prefixSum))+k;
}



int main()
{

    string str;
    cin>> str;

    cout<< shortPallindrome(str);
}

/*
aacecaaa
(0,7) =1
(1,6) =2
(2,5) =/
(2,4) =3
(3,3) =4
(4,2) =5
(5,1) =6
(6,0) =7
*/
