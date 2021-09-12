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
        ll n,i;
        string s;
        cin>>n;
        ll k,j,v[n],wt[n],w=0;
        for(i=0;i<n;i++)
        {
            cin>>wt[i]>>v[i];
            w+=wt[i];
        }
        for(j=1;j<=w;j++)
        {
            ll dp[w+1];
        memset(dp,0,sizeof(dp));
        
        for(i=1;i<=n;i++)
        {
            for(k=j;k>=0;k--)
            {
                if(wt[i-1]<=k)
                dp[k]=max(dp[k],dp[k-wt[i-1]]+v[i-1]);
            }
        }
        cout<<dp[j]<<" ";
}
}
