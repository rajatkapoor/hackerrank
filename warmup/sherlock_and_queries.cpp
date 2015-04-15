#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,m,i,j;
	cin>>n>>m;
	long long int a[100000],b[100000],c[100000];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
		cin>>b[i];
	for(i=0;i<m;i++)
		cin>>c[i];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			//cout<<a[j]<<" "<<b[i]<<" "<<c[i]<<" ";
			if(j%b[i]==0)
				a[j] = a[j]*c[i];
		}
		//cout<<a[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";

}