#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,n,a,b,mx,mn;
	cin >>t;
	while(t--)
	{
		cin>>n>>a>>b;
		mx = a>b?a:b;
		mn = a<b?a:b;
		//cout<<t;
		if(mn==mx)
			{
				cout<<(n-1)*mx<<endl;
				continue;
			}
		for(i=0;i<n;i++)
		{
			cout<<i*mx+(n-1-i)*mn<<" ";
		}
		cout<<endl;
	}
}