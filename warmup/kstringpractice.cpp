#include <stdio.h>
#include <iostream>
using namespace std;
void swap(int *i, int *j)
{
	int temp = *i;
	*i=*j;
	*j = temp;
}


void permute(int *array,int i,int length) 
{ 
	int j;
	if (length == i)
	{
		for (i=0;i<length;i++)
		printf("%d",array[i] );
		printf("\n");
	}
	else
	{
		for (j = i; j < length; j++) 
		{ 
			swap(array+i,array+j);
			permute(array,i+1,length);
			swap(array+i,array+j);
		}
	}
	
}
int main()
{
	int a[3]={1,2,3};
	permute(a,0,3);
}

