#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long c=0,k,n,i,j;
        cin>>n;
        string s;
        long long max=0,p;
        cin>>s;
        //long long a[n];
        for(i=0;i<n;i++)
        {
            if(s[i]=='1')
            {
            for(j=i+1;j<n;j++)
            {
                if(s[j]=='1')
                {
                    break;
                }
            }
            if((j-i+1)>max)
            {
                max=j-i+1;
                p=j;
            }
            }
        }
        for(k=p;k<n;k++)
        {
            if(s[k]=='1')
            {
            c++;
            }
        }
        cout<<n-c-max;
    
    cout<<endl;
    }
}