#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin>>t;
	string s;
	while(t--)
	{
		cin >>s;
		if(next_permutation(s.begin(),s.end())==false)
			cout<<"no answer"<<endl;
		else 
			cout<<s<<endl;
	}
}

/*
int main() {
    int t,i,j,l,k,min;
    cin>>t;
    string s,ss;
    char c;
    while(t--)
    {
    	cin>>s;
    	ss=s;
    	l = s.length();
    	c = s[l-1];
    	for(i=l-1;i>=0;i--)
    	{
    		if(c>s[i])
			{
				k=i;
				break;
			}
    	}
		c=s[k];
		s[k]=s[l-1];
		s[l-1]=c;
    	for(i=k+1;i<l;i++)
    	{
    		min = i;
    		for(j=i;j<l;j++)
    		{
    			min = s[min]<s[j]?min:j;
    		}
	    	c=s[min];
			s[min]=s[i];
			s[i]=c;
    	}
    	if (ss==s)
    		cout<<"no answer"<<endl;
    	else
    		cout<<s<<endl;
    }
}
*/
