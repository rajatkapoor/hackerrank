#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, len, mid, i,k;
	float nop;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		len = s.length();
		nop = 0;
		k = (len%2==0)?(len/2-1):(len/2);
		for(i=0;i<=k;i++)
			nop+= abs(s[i]-s[len-i-1]);
		printf("%0.0f\n", nop );
	}
}