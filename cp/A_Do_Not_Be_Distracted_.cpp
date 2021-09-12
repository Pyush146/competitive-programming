#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n,i,j,flag=0;
        string s;
        cin>>n>>s;
        map<char,long long>mp;
        for(i=0;i<n-1;)
        {
            if(s[i]==s[i+1])
            {
                i++;
            }
            else
            {
            for(j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            break;
            else
            i++;
            }
        }
        if(flag==1)
        cout<<"NO";
        else
        cout<<"YES";
    cout<<endl;
    }
}