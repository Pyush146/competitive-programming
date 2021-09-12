#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
    long n,i,j,k,max=0;
    //cout<<"enter";
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(i=1;i<n-1;i++)
    {
        long long sum=abs(a[i]-a[0])+abs(a[0]-a[n-1])+abs(a[n-1]-a[i]);
                if(sum>max)
                max=sum;
    }
    
    cout<<max<<endl;
    }
}