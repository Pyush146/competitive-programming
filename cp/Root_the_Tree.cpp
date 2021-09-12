#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n,i,u,v,c=0;
        cin>>n;
        vector<int>r(n+1,0);
        for(i=0;i<n-1;i++)
        {
            cin>>u;
            cin>>v;
            r[v]++;
        }
        for(i=1;i<=n;i++)
        {
            if(r[i]==0)
            c++;
        }
        cout<<c-1;
    cout<<endl;
    }
}