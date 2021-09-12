#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long D,d,a,b,c,i,m;
        cin>>D>>d>>a>>b>>c;
        m=d*D;
        if(m>=42)
        cout<<c;
        else if(m>=21)
        cout<<b;
        else if(m>=10)
        cout<<a;
        else
        cout<<0;
    cout<<endl;
    }
}