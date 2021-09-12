#include<bits/stdc++.h>
using namespace std;
int power(long long x, long long y, long long p)
{
    int res = 1;     // Initialize result
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}
 
int main()
{
    ios::sync_with_stdio(false);
cin.tie(NULL);
    long t;
    cin>>t;
    while(t--)
    {
        long long int p,x,i,n,k,flag=0,r=0;
        cin>>n;
        k=pow(10,9)+7;
        p=power(2,n-1,k);
        cout<<p;
    cout<<"\n";
    }
}