#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, n ,h, i;
	cin>>t;
	while(t--)
	{
		h = 1; 
		cin>>n;
		for (i=1; i<=n; i++)
		{
			if(i%2==1)
				h = 2*h;
			else
				h++;
		}
		cout<<h<<endl;
	}
	return 0;
}