#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        string s;
        
            if(a==(b+c) || b==(a+c) || c==(b+a))
            cout<<"YES";
            else
            {
                cout<<"NO";
            }
    cout<<endl;
    }
}