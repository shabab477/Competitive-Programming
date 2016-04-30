#include <iostream>
#include <stdio.h>
using namespace std;


int GCD(int i, int j)
{
	if(i == 0)
	{
		return j;
	}
	else
	{
		return GCD(j % i, i);
	}
}


int main() {
	
	long long int n = 0;
	scanf("%d", &n);
	while(n != 0)
	{
		int G=0;
	
		for(int i=1;i<n;i++)
		{
			for(int j=i+1;j<=n;j++)
		
			{
		
		    	G+=GCD(i,j);
		
			}
		}
		printf("%d\n", G);
		scanf("%d", &n);
	}
	return 0;
}