#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n,i,k,j,c=0,max=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                c++;
                if(max<c)
                max=c;
            }
            else
            {
                c=0;
            }
        }
        if(max>=k)
        cout<<"YES";
        else
        cout<<"NO";
    cout<<endl;
    }
}