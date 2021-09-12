#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long w,wr,n,i,l,flag=0,c=0;
        cin>>n>>w>>wr;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<long long, long long> mp;
        for(i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        w=w-wr;
        for(l=0;l<n;l++)
        {
            long c=mp[a[l]];
            if(mp[a[l]]>=2)
            {
            if(mp[a[l]]%2==0)
            {
            w-=c*a[l];
            }
            else
            {
            w-=(c-1)*a[l];
            }
            mp[a[l]]=0;
            }
            if(w<=0)
            {
                flag=1;
            break;
            }
        }
        if(w<=0)
        cout<<"YES";
        else
        cout<<"NO";
    cout<<endl;
    }
}