#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long i,m,n;
        cin>>n>>m;
        long long a[n],flag=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(m>n)
        {
            cout<<"Yes";
        }
        else
        {
        set <long long, long long> mp;
        for(i=0;i<n;i++)
        {
            mp.insert(a[i]);
        }
        for(i=1;i<=n;i++)
        {
            if(mp[i]==0)
            {
            flag=1;
            break;
            }
        }
        if(flag==1)
        {
            cout<<"Yes";
        }
        else
        cout<<"No";
        }
    cout<<endl;
    }
}