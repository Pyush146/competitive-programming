#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n,i,c=1;
        cin>>n;
        string s;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=1;i<n;i++)
        {
            if(a[i]==a[0])
            c++;
        }
        cout<<n-c;
    cout<<endl;
    }
}