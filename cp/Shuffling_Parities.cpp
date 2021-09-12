#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n,i,c=0; 
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            c++;
        }
        if(n%2!=0)
        {
            cout<<min(n/2+1,c)+min(n/2,n-c);
        }
        else
        {
            cout<<min(n/2,c)+min(n/2,n-c);
        }        
    cout<<endl;
    }
}