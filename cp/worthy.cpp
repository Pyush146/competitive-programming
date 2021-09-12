#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long h,n,m,k,i,j,r,c=0;
        cin>>n>>m>>k;
        double a[n+1][m+1];
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=n;j++)
            {
                if(i==0 || j==0)
                {
                    a[i][j]==0;
                }
                else{
                    cin>>a[i][j];
                }
            }
        }
        for(i=0;i<=n;i++)
        {
            double p=0;
            for(j=0;j<=n;j++)
            {
                a[i][j]+=p;
                p=a[i][j];
            }
        }
        for(j=0;j<=n;j++)
        {
            double p=0;
            for(i=0;i<=n;i++)
            {
                a[i][j]+=p;
                p=a[i][j];
            }
        }
        r=min(n,m);
        c=0;
        for(h=1;h<=r;h++)
        {
            for(i=0;i<=n;i++)
        {
            for(j=0;j<=n;j++)
            {
                if(a[i][j]+ a[i-h][j-h]-a[i][j-h]-a[i-h])
            }
        }
        }
    cout<<endl;
    }
}