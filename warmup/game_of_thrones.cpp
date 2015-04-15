#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int a[26] = {0};
	int l = s.length(),i,c=0;
	for(i=0;i<l;i++)
	{
		a[s[i]-97]++;
	}
	for(i=0;i<=25;i++)
	{
		if(a[i]%2!=0)
			c++;
	}
	if(c==0||c==1)
		cout<<"YES";
	else 
		cout<<"NO";
}