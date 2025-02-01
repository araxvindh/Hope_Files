#include<bits/stdc++.h>     /// xor truth
using namespace std;        // 0 0 0
                            // 1 0 1
int main()                  // 0 1 1
{                           // 1 1 0
    int n,m;
    cin>>n>>m;
    int diff =n^m; // to check the difference
    int diffcount=0;
    while(diff!=0){
        diff=diff&(diff-1);
        diffcount++;
    }
    cout<<diffcount;
}


// or method

//while(diff!=0){
  //  if(diff&1){
    //    diffcount++
    //}
    //diff=diff>>1;
//}
