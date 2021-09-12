#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n,k,i,c=0,d=0,flag=0;
        cin>>n>>k;
        string s;
        long long a[n];
        for(i=0;i<n;i++)
        {
        cin>>a[i];
        if(a[i]==-1)
        {
            c++;
        }
        else if(a[i]<=1 && a[i]!=-1)
        {
            d++;
        }
        else if(a[i]>k)
        {
            flag=1;
        }
        }
        if(c>ceil(n/2))
        {
            cout<<"Rejected";
        }
        else if(d==n)
        {
            cout<<"Bot";
        }
        else if(flag==1)
        {
            cout<<"Too Slow";
        }
        else
        {
            cout<<"Accepted";
        }
        cout<<endl;
    }
}