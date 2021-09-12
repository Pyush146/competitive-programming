#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t,r;
    cin>>t;
    for(r=1;r<=t;r++)
    {
        long long a[3][3],b[4],i,j,c=0;
        for(i=0;i<3;i++)
        {
        for(j=0;j<3;j++)
        {
        if(i==1 && j==1)
        {
        continue;
        }
        else
        {
        cin>>a[i][j];
        }
        }
        }
        if(a[0][0]+a[2][0]==(a[1][0]*2))
        c++;
        if(a[0][2]+a[2][2]==(a[1][2]*2))
        c++;
        if(a[0][0]+a[0][2]==(a[0][1]*2))
        c++;
        if(a[2][0]+a[2][2]==(a[2][1]*2))
        c++;
        b[0]=a[0][0]+a[2][2];
        b[1]=a[2][0]+a[0][2];
        b[2]=a[1][0]+a[1][2];
        b[3]=a[0][1]+a[2][1];
        unordered_map<long long,long> mp;
        for(int k=0;k<4;k++)
        {
            mp[b[k]]++;
        }
        int m=0;
        for(auto k: mp)
        {
            if(k.first%2==0)
            {
            if(m<=k.second)
            m=k.second;
            }
        }
        cout<<"Case #"<<r<<": "<<c+m;       
    cout<<endl;
    }
}