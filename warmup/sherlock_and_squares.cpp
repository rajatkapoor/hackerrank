#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	double i,a,b,p,q,c=0;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		c=0;
		p = floor(sqrt(a));
		q = sqrt(b);
		for(i=p;i<=q;i++)
		{
			if((i*i)>=a&&(i*i)<=b)
				c++;
		}
		cout<<c<<endl;
	}
}