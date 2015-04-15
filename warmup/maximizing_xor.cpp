#include<bits/stdc++.h>
using namespace std;

int main()
{
	int l, r, i, j, max;
	cin>>l>>r;
	max = 0;
	for(i=l;i<=r;i++)
	{
		for (j=i;j<=r;j++)
		{
			max = (max>(j^i))?max:(j^i);
		}

	}
	cout<<max<<endl;
}