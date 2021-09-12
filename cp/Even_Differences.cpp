#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n,i,c=0,d=0;
        cin>>n;
        string s;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                c++;
            }
            else
            {
                d++;
            }
            
        }
        if(c==n || d==n)
        {
            cout<<0;
        }
        else if(c<d)
        {
            cout<<c;
        }
        else
        {
            cout<<d;
        }
        
    cout<<endl;
    }
}