#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        double k1,k2,k3,v,r;
        cin>>k1>>k2>>k3>>v;
        r=100/(k1*k2*k3*v);
        r=floor((r*100)+.5)/100;
        if(r<9.58)
        cout<<"YES";
        else
        cout<<"NO";
    cout<<endl;
    }
}