#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n,i,m,j,c=0,k;
        cin>>n>>m;
        for(i=n;i>1;i--)
        {
            k=m-m%i;
            for(j=2;j*j<=i;j++)
            {
                if(k%j==0)
                {
                    c++;
                }
            }
        }
        cout<<n-1+c;
    cout<<endl;
    }
}