#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n,c=0,i,d=0;
        cin>>n;
        long long a[n],s=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            d+=a[i];
        }
        if(d%2==0)
        cout<<0;
        else
        {
            if(d==n)
            {
                cout<<-1;
            }
            else
            {
                cout<<1;
            }
            
        }
        
cout<<endl;
    }
}