#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n,i,e,s=0,j;
        cin>>n;
        long long q[n];
        for(i=0;i<n;i++)
        {
        cin>>q[i];
        }
        for(i=0;i<n;i++)
        {
        cin>>e;
        long long a[e];
        for(j=0;j<e;j++)
        {
            cin>>a[j];
            if(j>0)
            {
                s+=a[j]-q[j];
            }
            s+=a[0];
        }
        }
cout<<s;
    cout<<endl;
    }
}