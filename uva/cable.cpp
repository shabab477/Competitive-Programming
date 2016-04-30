#include <iostream>
using namespace std;
#include <math.h>
#include <stdio.h>
#include <stdlib.h>



long long int array1[1001];
long long int array2[1001];

int main() {
	int t = 0;
	
	scanf("%d", &t);
	
	for(int c = 0; c < t; c++)
	{
		int a1 = 0;
		scanf("%d", &a1);
		
		for(int i = 0; i < a1; i++)
		{
			scanf("%lld", &array1[i]);
			
		}
		
		
		int a2 = 0;
		
		scanf("%d", &a2);
		
		for(int i = 0; i < a2; i++)
		{
			scanf("%lld", &array2[i]);	
		}
		long long int min = 1000000000;
		for(int i = 0; i < a1; i++)
		{
			
				
				for(int j = 0; j < a2; j++)
				{
					if(abs(array1[i] - array2[j]) < min)
					{
						min = abs(array1[i] - array2[j]);
					}
				}
			
		}
		
		printf("%d\n", min);
	}
	return 0;
}