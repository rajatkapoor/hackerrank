#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, i, p, q, m;
	long int n;
	cin>>n>>t;
	int width[n];
	for(i=0; i<n; i++)
	{
		cin>>width[i];
	}
	while (t--)
	{
		cin>>p>>q;
		m = width[p];
		for (i=p;i<=q;i++)
		{
			m = m<width[i]?m:width[i];
		}
		cout<<m<<endl;
	}
}
