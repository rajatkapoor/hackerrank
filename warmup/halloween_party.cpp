#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	float n;
	cin>>t;
	while (t--)
	{
		cin>>n;
		printf("%0.0f\n",(floor(n/2.0)*ceil(n/2.0)));
	}
}