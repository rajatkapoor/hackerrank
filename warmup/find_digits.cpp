#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,d;
	long long int n,ncopy,c;
	cin>>t;
	while(t--)
	{
		cin>>n;
		ncopy = n;
		c=0;
		while(n!=0)
		{
			d = n%10;
			n = floor(n/10);
			if(d!=0 && ncopy%d==0)
				c++;
		}
		cout<<c<<endl;
	}
}