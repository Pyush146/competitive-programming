#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long int k=1000000007,n,j=1,i,x,b,s=0,r;
        cin>>n>>x;
        s=(s+x+k)%k;
        long long int a[n];
        a[0]=0;
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            cin>>b;
        }
        sort(a,a+n);
        for(i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
            {
                r=(x*j+k)%k;
                s=(s+r+k)%k;
                j++;
            }
            else
            {
                j=1;
                r=(x*j+k)%k;
                s=(s+r+k)%k;
                j++;
            }
        }
        cout<<s%k;
    cout<<endl;
    }
}