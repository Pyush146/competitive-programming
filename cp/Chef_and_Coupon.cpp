#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long d,c,a1,a2,a3,b1,b2,b3,s1,s2;
        cin>>d>>c;
        cin>>a1>>a2>>a3;
        cin>>b1>>b2>>b3;
        s1=a1+a2+a3;
        s2=b1+b2+b3;
        if(s1<150 && s2<150)
        cout<<"NO";
        else if(s1>=150 && s2<150)
        {
            if(d>c)
            cout<<"YES";
            else
            {
                cout<<"NO";
            }
        }
        else if(s1<150 && s2>=150)
        {
            if(d>c)
            cout<<"YES";
            else
            {
                cout<<"NO";
            }
        }
        else
        {
            if(2*d>c)
            cout<<"YES";
            else
            {
                cout<<"NO";
            }
        }
        
    cout<<endl;
    }
}