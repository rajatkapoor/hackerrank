#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,p,ncopy;
	cin >>n;
	ncopy = n;
	int a[1000]={0};
	while(n--)
	{
		cin>>p;
		a[p]++;
	}
	for (i=0;i<1000;i++)
	{
		if(a[i]!=0)
		{
			cout<<ncopy<<endl;
			ncopy-= a[i];
		}
	}
}