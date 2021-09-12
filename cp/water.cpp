#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long h,x,y,c,ans;
        cin>>h>>x>>y>>c;
        ans=h*(x+y/2);
        if(ans<=c)
        cout<<"YES";
        else
        cout<<"NO";
    cout<<endl;
    }
}