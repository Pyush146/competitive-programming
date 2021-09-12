#include<bits/stdc++.h>
using namespace std;
int main()
{
        long long q,x,n,i,l,flag=0,s=0,j;
        cin>>n;
        long long a[n];
        
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        cin>>q;
        for(j=1;j<=q;j++)
        {
            cin>>x;
            s=(s+1000000007)%1000000007;
            /*long long p=pow(2,j);
            long long k=(s%1000000007)*(p%1000000007);
            cout<<k%1000000007;*/
            s+=(s+1000000007)%1000000007;
            cout<<s%1000000007;
            cout<<endl;
        }
}