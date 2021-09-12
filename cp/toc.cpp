#include <bits/stdc++.h>
using namespace std;
int w[8][3] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}, {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, {0, 4, 8}, {2, 4, 6}};
bool Win(char *a, char c)
{
	for (int i=0; i<8; i++)
		if (a[w[i][0]] == c && a[w[i][1]] == c && a[w[i][2]] == c )
			return true;
	return false;
}
bool check(char a[9])
{
	int i,x=0, o=0;
	for (i=0; i<9; i++)
	{
	if (a[i]=='X') 
	x++;
	if (a[i]=='O') 
	o++;
	}
	if (x==o || x==o+1)
	{
		if (Win(a, 'O'))
		{
			if (Win(a, 'X'))
				return false;
				return (x == o);
		}

				if (Win(a, 'X') && x!= o+ 1)
		return false;
		return true;
	}
	return false;
}
int main()
{long t;
    cin>>t;
    while(t--)
    {
        long long j,i,c=0,r=0,d=0,e=0;
        char a[9];
        for(i=0;i<9;i++)
        {
                cin>>a[i];
				if(a[i]=='_')
				{
					c++;
				}
        }
	   int flag=1;
(check(a))? flag=1:flag=0;
					if(flag==0)
					cout<<3;
					else
					{
						if(Win(a,'X')==false && Win(a,'O')==false && c>0)
						cout<<2;
						else
						cout<<1;
					}
cout<<endl;
}
}
