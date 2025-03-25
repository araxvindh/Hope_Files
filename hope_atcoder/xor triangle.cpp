#include<bits/stdc++.h>
using namespace std;
void solve(){
int x,bitcount=0;
cin>>x;
while( (l<<bitcount)<= x){
    bitcount++;
}
int y=((1<<(bitcount-1))-1);
int s3=x^y;
cout<<(x+y>s3 && x+s3>y && y+S3>x?y:—1)<<endl;

}
int main(){
int tc;
cin>>tc;
while( tc-->0) {
solve();
}
return 0;
