#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n,x,i;
        cin>>n>>x;
        long long s[n],r[n];
        for(i=0;i<n;i++)
        {
            cin>>s[i]>>r[i];
        }
        long long max=r[0];
        for(i=0;i<n;i++)
        {
            if(s[i]<=x)
            {
                if(r[i]>max)
                max=r[i];
            }
        }
        cout<<max;
    cout<<endl;
    }
}