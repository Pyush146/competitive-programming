#include<bits/stdc++.h>
using namespace std;
int gcd(long long a, long long b)
{
    if (a == 0)
       return b;
    if (b == 0)
       return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long k,c=0,n,i,j;
        cin>>k;
        n=2*k+1;
        long long a[n];
        for(i=1;i<=n;i++)
        {
            a[i-1]=k+i*i;
        }
        for(i=0;i<n-1;i++)
        {
            j=i+1;
                c+=gcd(a[i],a[j]);
        }
        cout<<c;
        cout<<endl;
    }
}