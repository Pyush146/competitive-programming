#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long r,n,s=0,x,i,j,k=0,flag=0;
        cin>>n>>x;
        long long a[n],b[n]={0};
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        j=n;
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(a[i]>x)
            {
                j=i;
                break;
            }
            else if(a[i]<x)
            {
                j=i;
            }
            else
            {
                r=i;
            }
        }
        if(j==n)
        {
            j=r;
        }
        for(i=j;i<n;i++)
        {
            b[k]=a[i];
            k++;
        }
        for(i=0;i<j;i++)
        {
            b[k+i]=a[i];
        }
        for(i=0;i<n;i++)
        {
            s+=b[i];
            if(s==x)
            {
                flag=1;
                break;
            }
        }
        
        if(flag==1)
        {
            cout<<"NO"<<endl;
            for(i=0;i<n;i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
        
        }
        else{
            cout<<"YES"<<endl;
            for(i=0;i<n;i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
        }

    }
}