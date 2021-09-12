#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long j,t;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        long long int n,i=1,s=0,c=0;
        cin>>n;
        while(n>s)
        {
            s=s+i-1;
            if((n-s)%i==0)
            {
                if(n<=s)
                break;
            c++;
            }
            i++;
        }
        cout<<"Case #";
        cout<<j;
        cout<<": ";
        cout<<c;
    cout<<endl;
    }
}