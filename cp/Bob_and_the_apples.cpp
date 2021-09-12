#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
        ll n,i,m,j,a,b;
        string s;
        cin>>n>>m;
        vector<int,int>v(n),p(n);
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            v.push_back(a);
            p.push_back(b);
        }
        vector<vector<int>>dp(n+1,vector<int>(m+1))
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                if(i==0 )
            }
        }
    }
    cout<<endl;
}
