#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,d,k,i;
        cin>>a>>b>>c>>d>>k;
        i=abs((a+b)-(c+d));
        if(k==(i+1))
        {
                cout<<"NO";
        }
            else
            {
                cout<<"YES";
            }
        
    cout<<endl;
    }
}