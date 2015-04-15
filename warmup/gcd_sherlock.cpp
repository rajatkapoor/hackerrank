#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int max,min;
    max = a>b?a:b;
    min = a>b?b:a;
    if (min == 0)
        return max;
    else
        return gcd(min,max%min);
}

int main()
{
    int t,n,i,j,c;
    long int a[100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            for(j=i;j<n;j++)
            {
                if(gcd(a[i],a[j])==1)
                    c++;
            }
        if(c!=0)
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
    }

}