#include <bits/stdc++.h>
using namespace std;

int compare(const void *a, const void *b)
{
	return (*(int *)a - *(int*)b);
}

int main()
{
	long int n,k,t,i,uf=1000000000;
	cin>>n>>k;
	long long int a[n],p;
	t=n;
	for(i=0;i<t;i++)
		cin>>a[i];
	qsort(a,n,sizeof(a[0]),compare);
	for (i=0;i<n-k;i++)
		uf = uf<(a[i+k-1]-a[i])?uf:(a[i+k-1]-a[i]);
	cout<<uf;
}