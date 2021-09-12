#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long l,n,i,a,b,c=0;
        string s;
        cin>>l>>a>>b>>s;
        n=s.length();
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            c++;
        }
        cout<<c*a+(n-c)*b;        
    cout<<endl;
    }
}