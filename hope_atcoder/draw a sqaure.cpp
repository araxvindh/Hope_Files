#include<bits/stdc++.h>

using namespace std;


double squaredDistance(int x1, int y1, int x2, int y2) {
    return pow(x2 - x1, 2) + pow(y2 - y1, 2);
}

bool isSquare(int l, int r, int d, int u) {
    int x1 = -l, y1 = 0;
    int x2 = r, y2 = 0;
    int x3 = 0, y3 = -d;
    int x4 = 0, y4 = u;


    double d1 = squaredDistance(x1, y1, x3, y3);
    double d2 = squaredDistance(x3, y3, x2, y2);
    double d3 = squaredDistance(x2, y2, x4, y4);
    double d4 = squaredDistance(x4, y4, x1, y1);
    double diag1 = squaredDistance(x1, y1, x2, y2);
    double diag2 = squaredDistance(x3, y3, x4, y4);


    if (d1 == d2 && d2 == d3 && d3 == d4) {
        if (diag1 == diag2 && diag1 == 2 * d1) {
            return true;
        }
    }
    return false;
}

int main()

{
    int n;
    cin>>n;

    while(n-->0)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        if(isSquare(a,b,c,d))
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
}
