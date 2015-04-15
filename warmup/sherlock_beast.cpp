#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i;
	long int n;
	cin >>t;
	while(t--)
	{
		cin >>n;
		if(n%3==0)
		{	
			for(i=0;i<n;i++)
					cout<<"5";
				cout<<endl;
		}
		else if(n%3==2&&n>=5)
			{
				for(i=0;i<n-5;i++)
					cout<<"5";
				cout<<"33333"<<endl;
			}
		else if(n%3==1&&n>=10)
			{
				for(i=0;i<n-10;i++)
					cout<<"5";
				cout<<"3333333333"<<endl;
			}
		else 
			cout<<"-1"<<endl;
	}
}