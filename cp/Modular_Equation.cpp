#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long x,m,c=0,n,i,j;
        cin>>n>>m;
        vector<long long>v(n+1,1);
        for(i=2;i<=n;i++)
        {
            x=m%i;
            c+=v[x];
            for(j=x;j<=n;j+=i)
            {
                v[j]++;
            }
        }
        cout<<c;
        cout<<endl;
    }
}