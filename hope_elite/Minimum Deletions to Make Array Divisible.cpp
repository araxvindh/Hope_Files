    #include<bits/stdc++.h>

    using namespace std;

    int tofindGcd(int a,int b)
    {
        return (b==0)?a: tofindGcd(b,a%b);
    }
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int n=nums.size();
        int m=numsDivide.size();
        sort(nums.begin(),nums.end());

        int gcd=numsDivide[0];
        for(int i=1;i<m;i++)
        {
            gcd=tofindGcd(gcd,numsDivide[i]);
        }

        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(gcd%nums[i]!=0)
            {
                cnt++;
            }else
            {
                break;
            }
        }
        return (cnt==n)?-1:cnt;
    }


    int main()
    {

        int n,m;
        cin>>n>>m;

        vector<int>nums(n);
        vector<int>numsdivide(m);

        for(int i=0;i<n;i++)
        {

            cin>>nums[i];
        }

        for(int i=0;i<m;i++)
        {

            cin>>numsdivide[i];
        }

        cout<<minOperations(nums,numsdivide);
    }
