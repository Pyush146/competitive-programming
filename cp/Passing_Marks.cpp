#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long m1,m2,m3,n,a,b,c;
        cin>>m1>>m2>>m3>>n>>a>>b>>c;
        if(a<m1 || b<m2 || c<m3 || (a+b+c)<n)
        cout<<"NO";
        else
        cout<<"YES";
    cout<<endl;
    }
}