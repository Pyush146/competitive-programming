#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long th=0,p=0,n,m,x,y,a,b,mn=0;
        cin>>n>>m>>x>>y>>a>>b;
        th=n-x+m-y;
        mn=min(n-a,m-b);
        p=mn+(n-(a+mn)+m-(b+mn));
        if(th<=p)
        {
        cout<<"YES";
        }
        else
        cout<<"NO";
    cout<<endl;
    }
}