#include<bits/stdc++.h>
using namespace std;
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long j,i,c=0,r=0,d=0,e=0;
        char a[3][3];
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='_')
                c++;
                else if(a[i][j]=='X')
                d++;
                else
                e++;
            }
        }
        int flag1=0,flag2=0;
        for(i=0;i<3;i++)
        {
            j=0;
                if(a[i][j]==a[i][j+1] && a[i][j]==a[i][j+2])
                {
                    if(a[i][j]=='X')
                    {
                    flag1=1;
                    r++;
                    }
                    else if(a[i][j]=='O')
                    {
                    flag2=1;
                    r++;
                    }
                }
            
        }
        for(j=0;j<3;j++)
        {
            
            i=0;
                if(a[i][j]==a[i+1][j] && a[i][j]==a[i+2][j])
                {
                    if(a[i][j]=='X')
                    {
                    flag1=1;
                    r++;
                    }
                    else if(a[i][j]=='O')
                    {
                    flag2=1;
                    r++;
                    }
                }
        }
        i=0;
        j=0;
        if(a[i][j]==a[i+1][j+1] && a[i][j]==a[i+2][j+2])
                {
                    if(a[i][j]=='X')
                    {
                    flag1=1;
                    r++;
                    }
                    else if(a[i][j]=='O')
                    {
                    flag2=1;
                    r++;
                    }
                }
        if(a[0][2]==a[1][1] && a[0][2]==a[2][0])
                {
                    if(a[i][j]=='X')
                    {
                    flag1=1;
                    r++;
                    }
                    else if(a[i][j]=='O')
                    {
                    flag2=1;
                    r++;
                    }
                }
        if((flag1==1 && flag2==1) || (flag1==1 && (d>(e+1) || e>=d)) || (flag2==1 && (d>(e+1) || e>=d)) || (e>d) || (d>(e+1)))
        cout<<3;
        else if(flag1==0 && flag2==0 && c>0)
        cout<<2;
        else
        {
            //if((flag1==1 && d>e) || (flag2==1 && d==e) || (c==0 && d>e))
            cout<<1;
            //else
            //cout<<3;
        }
        cout<<endl;
    }
}