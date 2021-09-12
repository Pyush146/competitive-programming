#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long u,v,a,s,r;
        cin>>u>>v>>a>>s;
        r=u*u-2*a*s;
        double d=sqrt(r);
        if(u==v)
        {
            cout<<"Yes";
        }
        else if(d<=v)
        {
        cout<<"Yes";
        }
        else
        {
            cout<<"No";
        }
cout<<endl;
    }
}hghgf