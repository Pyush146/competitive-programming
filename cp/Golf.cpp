#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
cin.tie(NULL);
    long t;
    cin>>t;
    while(t--)
    {
        long long i,n,x,k,flag=0,r=0;
        cin>>n>>x>>k;
        if(x%k==0)
        flag=1;
        else
        {
            r=(n+1)-x;
            if(r%k==0)
            flag=1;
        }
        if(flag)
        cout<<"YES";
        else
        cout<<"NO";
        
    cout<<"\n";
    }
}