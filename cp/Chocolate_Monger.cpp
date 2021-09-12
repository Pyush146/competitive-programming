#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n,r,i,ans=0,m;
        cin>>n>>r;
        long long a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        set<long long> mp;
        for(i=0;i<n;i++)
        {
            mp.insert(a[i]);
        }
        ans=mp.size();
        m=min(n-r,ans);
        cout<<m;
    cout<<endl;
    }
}