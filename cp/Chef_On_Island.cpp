#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long x,y,xr,yr,d;
        double m;
        cin>>x>>y>>xr>>yr>>d;
        m=min(x/xr,y/yr);
        if(m<d)
        cout<<"NO";
        else
        cout<<"YES";
    cout<<endl;
    }
}