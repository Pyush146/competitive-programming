#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long x,y,n,m,i,j;
        cin>>n>>m;
        cin>>x>>y;
        for(i=0;i<n;i++)
        {
            long long f=0,p=0,u=0;
            for(j=0;j<m;j++)
            {
                char ch;
                cin>>ch;
                if(ch=='F')
                f++;
                else if(ch=='U')
                u++;
                else if(ch=='P')
                p++;
            }
            if((f>=x) || ((f>=(x-1))&&(p>=y)))
            cout<<1;
            else
            cout<<0;
        }
    cout<<endl;
    }
}