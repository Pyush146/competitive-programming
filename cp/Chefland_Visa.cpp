#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long x,y,z,a,b,c;
        cin>>x>>y>>z>>a>>b>>c;
        if(x<=y && (z<=a) && (b>=c))
        cout<<"YES";
        else
        cout<<"NO";        
    cout<<endl;
    }
}#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long i,j,k,a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        i=abs(e-a);
        j=abs(e-b);
        k=abs(e-c);
        /*if(i<=j && i<=k)
        {
            if(a<=e && d>=(b+c))
            cout<<"YES";
            else
            cout<<"NO";
        }
        else if(j<=i && j<=k)
        {
            if(b<=e && d>=(a+c))
            cout<<"YES";
            else
            cout<<"NO";
        }
        else if(k<=j && k<=i)
        {
            if(c<=e && d>=(b+a))
            cout<<"YES";
            else
            cout<<"NO";
        }
        else
        {
            cout<<"NO";
        }*/
        if((a+b)<=d && c<=e)
        cout<<"YES";
        else if((c+b)<=d && a<=e)
        cout<<"YES";
        else if((c+a)<=d && b<=e)
        cout<<"YES";
        else
        cout<<"NO";
    cout<<endl;
    }
}