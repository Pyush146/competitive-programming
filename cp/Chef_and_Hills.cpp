#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long th=0,p=0,i,n,m,x,y,a,b,mn=0;
        cin>>n>>k;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if(k%2!=0)
        {
            p=a[0]+a[n-1];
            for(i=0;i<n/2;i++)
            {
            th=p-k/2;
            mn+=abs(th-a[i]);
            }
            for(i=n/2;i<n;i++)
            {
            th=p+k/2;
            mn+=abs(th-a[i]);
            }
        }
        else
        {
            
        }
    cout<<endl;
    }
}