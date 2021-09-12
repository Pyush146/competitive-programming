#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long h,n,m,k,i,j,r,c;
        cin>>n>>m>>k;
        double a[n+1][m+1]={0};
        for(i=0;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(i==0)
                a[i][j]=0;
                else
                    cin>>a[i][j];
            }
        }
        
        for(i=0;i<=n;i++)
        {
            double p=0;
            for(j=0;j<=m;j++)
            {
                a[i][j]+=p;
                p=a[i][j];
            }
        }
        
        
        for(j=0;j<=m;j++)
        {
            double p=0;
            for(i=0;i<=n;i++)
            {
                a[i][j]+=p;
                p=a[i][j];
            }
        }
        

        r=min(m,n);
        c=0;
        for(h=1;h<=r;h++)
        {
            for(i=h;i<=n;i++)
        {
            for(j=h;j<=m;j++)
            {
                double z=(a[i][j]+ a[i-h][j-h]-a[i][j-h]-a[i-h][j])/(h*h);
                if(z>=k)
                {
                    c++;
                }
            }
        }
        }
        cout<<c;
    cout<<endl;
    }
}
//qwertyyuiop[]\';lkjhgasdfghhjkl