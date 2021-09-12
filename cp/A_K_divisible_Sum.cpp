#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        double n,k;
        cin>>n>>k;
        string s;
        double p=n/k;
        double q=k/n;
        if(q>=1)
        {
            cout<<ceil(q);
        }
        else
        {
            long long r=ceil(p);
            double u=r*k/n;
            cout<<ceil(u);
        }
        cout<<endl;
    }
    cout<<endl;
}