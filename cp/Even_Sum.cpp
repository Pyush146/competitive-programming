#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long i,n,s=0;
        cin>>n;
        
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        if(s%2==0)
        cout<<1;
        else
        {
            cout<<2;
        }
        
    cout<<endl;
    }
}