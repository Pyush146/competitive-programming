#include<bits/stdc++.h>
using namespace std;
bool subseq(string s1,string s)
{
    long long i,j=0;
    for(i=0;i<s.size();i++)
 {
    if(s1[j]==s[i])
    j++;
    if(j==s1.size())
    return true;
} 
return false;   
}
string binary(string s)
{
    string s1,s2;
    queue<string>q;
    q.push("1");
    while(true)
    {
        s1= q.front();
        q.pop();
        if(subseq(s1,s)==false)
        return s1;
        s2=s1;
        q.push(s1.append("0"));
        q.push(s2.append("1"));
    }
}
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long n,i,flag=0;
        string s;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
        if(s[i]=='0')
        flag=1;
        }
        if(flag==0)
        cout<<"0";
        else
        cout<<binary(s);
            cout<<endl;
    }
}