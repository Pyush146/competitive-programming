#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n,i,j;
        cin>>n;
        string s;
        long long w[n],l[n];
        for(i=0;i<n;i++)
        {
            cin>>w[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>l[i];
        }
        if(n==2)
        {
        if(w[1]<w[0])
        {
            if(l[0]==1)
            cout<<2;
            else
            cout<<1;
        }
        else
        cout<<0;
        }
        for(i=n-2;i>-1;i--)
        {
            
        }
    cout<<endl;
    }
}