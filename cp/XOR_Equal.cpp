#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int>vt;
typedef pair<int,int>pr;
#define fo(i,a,b) for(int i=a; i<=b; i++)
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,k,x,max=0,min=0;
        string s;
        cin>>n>>x;
        ll v[n];
        //vector<long long int>v(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
            }
            if(n==1)
            {
             cout<<1<<0;
             continue;   
            }
        map<ll,ll>mp1,mp2;
        for(i=0;i<n;i++)
        {
            mp1[v[i]]++;
            mp2[v[i]^x]++;
        }
        for(i=0;i<n;i++)
        {
            
            if((mp1[v[i]]+mp2[v[i]])>max)
            {
            max=mp1[v[i]]+mp2[v[i]];
            min=mp2[v[i]];
            }
            else if((mp1[v[i]]+mp2[v[i]])==max && min>mp2[v[i]])
            {
            max=mp1[v[i]]+mp2[v[i]];
            min=mp2[v[i]];
            }
            else if(x==0 && mp1[v[i]]>max)
            {
                max=mp1[v[i]];
                min=0;
            }
        }
        cout<<max<<" "<<min;
    cout<<endl;
    }
}
