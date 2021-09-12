#include<bits/stdc++.h>
using namespace std;
int w[8][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};
bool win(char *a, char c)
{
	for (int i=0; i<8; i++)
		if (a[w[i][0]] == c && a[w[i][1]] == c && a[w[i][2]] == c )
			return true;
	return false;
}
int main()
{
    long t;
    cin>>t;
    while(t--)
    {
        long long j,i,c=0,r=0,d=0,e=0;
        char a[9];
        for(i=0;i<9;i++)
        {
                cin>>a[i];
                if(a[i]=='_')
                c++;
                else if(a[i]=='X')
                d++;
                else
                e++;
        }
        int flag=1,flag1=0,flag2=0;
        
if(win(a,'X')==true)
flag1=1;
if(win(a,'O')==true)
flag2=1;
        if(d==e || d==(e+1))
        {
            if(flag2==1)
            {
                if(flag1==1 || d!=e)
                flag=0;
                else
                flag=1;
            }
            if(flag1==1 && d!=(e+1))
            {
                flag=0;
            }
            else
            {
                flag=1;
            }
        }
        else
        {
            flag=0;
        }
        if(flag==0)
        cout<<3;
        else
        {
            if((flag1==0 && flag2==0 && c!=0))
            cout<<2;
            else
            cout<<1;
        }
              cout<<endl;
    }
}