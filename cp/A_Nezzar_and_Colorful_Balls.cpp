#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        map<int,int> mp;
        for(i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
    cout<<mp;
    cout<<endl;
    }
}