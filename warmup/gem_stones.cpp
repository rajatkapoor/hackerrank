#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,j,l,ans=0;
	string s;
	cin >> t;
	int a[26]={0};
	for(i=0;i<t;i++)
	{
		cin>>s;
		l = s.length();
		for(j=0;j<l;j++)
		{
			if(a[s[j]-97]==i)
			{
				a[s[j]-97]++;
			}
		}
	}
	for(j=0;j<=25;j++)
	{
		if(a[j]==t)
			ans++;
	}
	cout<<ans;
}