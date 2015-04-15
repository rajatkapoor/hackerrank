#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int length = 0;
int fact[100000];
void bigfact(int num)
{
    int i;
    for(i=2;i<=num;i++)
    {
        multiply(i);
    }
}
void multiply(int num)
{
    long i,r=0;
    int arr[MAX];
    for(i=0;i<=length;i++)
    {
       arr[i]=fact[i];
    }

    for(i=0;i<=length;i++)
    {
        fact[i] = (arr[i]*num + r)%10;
        r = (arr[i]*num + r)/10;
    }
    if(r!=0)
    {
        while(r!=0)
        {
            fact[i]=r%10;
            r= r/10;
            i++;
        }
    }
length = i-1;   
}
// unsigned long long int fact(unsigned long long int i)
// {
//     if (i==0)
//         return 1;
//     else 
//         return i*fact(i-1);
// }
unsigned long long int diffSum(unsigned long long int p[],unsigned long long int n, unsigned long long int k)
{
    unsigned long long int sum = 0,i;
    for (i=0;i<n;i++)
    {
        sum+=abs(k-p[i]);
    }
    return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    unsigned long long int n,i,ss;
    cin>>t;
    while (t--)
    {
        cin >>n;
        ss=0;
        unsigned long long int a[n];
        for(i=0;i<n;i++)
        {
            a[i]=i+1;
        }
        for (i=1;i<=n;i++)
        {
            ss+=diffSum(a,n,i);
            //cout<<ss<<" ";
        }
        cout<<fact(n-1);
        cout<<(ss*fact(n-1))%1000000007<<endl;
    }
    return 0;
}
