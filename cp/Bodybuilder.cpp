#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n,r,i,ans=0,max=0;
        cin>>n>>r;
        long long a[n+1],b[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b[i];
        }
        ans=0;
        max=ans;
        for(i=0;i<n-1;i++)
        {
            if(ans<0)
            {
                ans=0;
            }
            
            ans+=b[i]-(a[i+1]-a[i])*r;
            if(ans>=max)
            max=ans;
        }
        ans+=b[n-1];
        if(ans>max)
        max=ans;
        cout<<max;
    cout<<endl;
    }
}