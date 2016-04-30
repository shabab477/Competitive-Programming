#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	
	int t = 0;
	
	
	while(scanf("%d", &t) != EOF)
	{
		long long int array[t];
		
		for(int c = 0; c < t; c++)
		{
			scanf("%lld", &array[c]);
		}
		
		long long int min = 1000010;
		long long int find = 0;
		scanf("%lld", &find);
		long long int minI = 0;
		long long int minJ = 0;
		for(int c = 0; c < t; c++)
		{
			for(int i = 0; i < t; i++)
			{
				if(i != c)
				{
					long long int sum = array[i] + array[c];
					if(sum == find)
					{
						long long int diff = abs(array[i] - array[c]);
						if(diff < min)
						{
							min = diff;
							minI = array[i];
							minJ = array[c];
						}
					}
				}
			}
		}
		
		if(minI <= minJ)
		{
			printf("Peter should buy books whose prices are %lld and %lld.\n", minI, minJ);
		}
		else
		{
			printf("Peter should buy books whose prices are %lld and %lld.\n", minJ, minI);
		}
		
		printf("\n");
	}
	
	return 0;
}