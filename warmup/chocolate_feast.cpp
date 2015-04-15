#include<bits/stdc++.h>
using namespace std;

long int freeChocolates(long int w, long int m)
{
	if(w/m!=0)
		return ((w/m)+freeChocolates(w/m+w%m,m));
	else 
		return 0;
}

int main()
{
	int t;
	long int n,c,m;
	cin>>t;
	while(t--)
	{
		cin>>n>>c>>m;
		cout<<(n/c+freeChocolates(n/c,m))<<endl;
	}
}