#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    //cout<<"enter";
    cin>>n;
    for(i=10;i>0;i--)
    {
        if((n%i)==0)
        {
        cout<<i<<endl;
        break;
        }
    }
}