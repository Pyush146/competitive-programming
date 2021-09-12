#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n,k,i;
        cin>>n>>k;
        string s;
        long long a[n];
        if(n%2==0)
        {
            if(k%n==0)
            {
                cout<<n;
            }
            else
            cout<<k%n;
        }
        else
        {
            long long p=k%n;
                
        }
        
    cout<<endl;
    }
}