#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

long long int gcd(long long int i,long long int j)
{
	if(i == 0)
	{
		return j;
	}
	else
	{
		return gcd(j % i, i);
	}
}

int main() {
	
	int n = 0;
	scanf("%d", &n);
	while(n != 0)
	{
		long long int array[n];
		
		for(int c = 0; c < n; c++)
		{
			scanf("%lld", &array[c]);
		}
		
		double count = 0;
		double total = 0;
		for(int c = 0; c < n; c++)
		{
			for(int k = c + 1; k < n; k++)
			{
				if(gcd(array[c], array[k]) == 1)
				{
					count++;
				}
				total++;
			}
		}
		
		if(count == 0)
		{
			printf("No estimate for this data set.\n");	
		}
		else
		{
			double calc = (total * 6) / count;
			calc = sqrt(calc);
			printf("%.6f\n", calc);
		}
		scanf("%d", &n);
	}
	return 0;
}