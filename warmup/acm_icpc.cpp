#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,max=0,c=0,p=0,k,i,j;
	cin>>n>>m;
	string a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			c=0;

			for(k=0;k<=m;k++)
			{
				if(a[i][k]=='1'||a[j][k]=='1')
					c++;
			}
			if(c>max)
			{
				max = c;
				p=1;
			}
			else if(c==max)
				p++;
		}		
	}
	cout<<max<<endl<<p;

}