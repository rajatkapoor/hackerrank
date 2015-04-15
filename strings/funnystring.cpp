#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    int t,i,j,flag = 1,sz;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        sz = s.size();
        for (i=1,j = sz-1;i<sz;i++,j--)
        {

            if(abs(s[i]-s[i-1])!=abs(s[j]-s[j-1]))
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout<<"FUNNY\n";
        else 
            cout<<"NOT FUNNY\n";
        flag = 1;

    }
}