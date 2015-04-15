#include<bits/stdc++.h>
using namespace std;

int main()
{
	long int n,m,a,b,k,avg=0;
	cin>>n>>m;
	while(m--)
	{
		cin>>a>>b>>k;
		avg+=(k*(b+1-a));
	}
	cout<<avg/n;
}