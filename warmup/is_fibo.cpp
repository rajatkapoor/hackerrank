#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,n;
	int i,flag;
	double r1,r2;
	cin>>t;
	long long int a[60]={0};
	a[0]=0;
	a[1]=1;
	for (i=2;i<60;i++)
		a[i] = a[i-2] + a[i-1];
	while(t--)
	{
		cin>>n;
		flag=0;
		for(i=0;i<60;i++)
		{
			if(n==a[i])
				flag=1;
				
		}
		if(flag)
			cout<<"IsFibo"<<endl;
		else
			cout<<"IsNotFibo"<<endl;
	}
}