#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n=10,i,k;
        string s;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>k;
        for(i=n-1;i>-1;i--)
        {
            k=k-a[i];
            if(k<0)
            break;
        }
        cout<<i+1;
    cout<<endl;
    }
}