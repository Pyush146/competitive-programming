#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n,i,l,flag=0,c=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
            c++;
            }
            double k=(double)c/(i+1);
            if(k>=0.5)
            {
            flag=1;
            break;
            }
        }
        if(flag==1)
        cout<<"YES";
        else
        cout<<"NO";
    cout<<endl;
    }
}