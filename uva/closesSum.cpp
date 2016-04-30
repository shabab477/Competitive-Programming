#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;



int main() {
	
	int t = 0; 
	scanf("%d", &t);
	
	int c = 1;
	
	while(t != 0)
	{
		printf("Case %d:\n", c);
		
		long long int array[t];
		
		for(int i = 0; i < t; i++)
		{
			scanf("%lld", &array[i]);
		}
		
		//sort(array, array + t);
		int b = t * t;
		long long int temp[b];
		int size = 0;
		
		for(int i = 0; i < t; i++)
		{
			for(int k = i + 1; k < t; k++)
			{
				temp[size] = array[i] + array[k];
				size++;
			}
		}
		
		int q = 0;
		scanf("%d", &q);
		sort(temp, temp + size);
		
		
		//printf("%d\n", temp[0]);
		for(int i = 0; i < q; i++)
		{
			long long int find = 0;
			scanf("%lld", &find);
			if(temp[0] == find)
			{
				printf("Closest sum to %lld is %lld.\n", find, temp[0]);
			}
			else if(temp[0] > find)
			{
				long long int sub1 = abs(find - temp[0]);
				long long int sub2 = abs(find - temp[1 % size]);
				
				if(sub1 < sub2)
				{
					printf("Closest sum to %lld is %lld.\n", find, temp[0]);
				}
				else
				{
					printf("Closest sum to %lld is %lld.\n", find, temp[1 % size]);
				}
			}
			else
			{
				int l = 1;
				while(l < size)
				{
					if(temp[l] == find)
					{
						printf("Closest sum to %lld is %lld.\n", find, temp[l]);
						break;
					}
					else if(temp[l] > find)
					{
						long long int sub1 = abs(find - temp[l]);
						long long int sub2 = abs(find - temp[l - 1]);
				
						if(sub1 < sub2)
						{
							printf("Closest sum to %lld is %lld.\n", find, temp[l]);
						}
						else
						{
							printf("Closest sum to %lld is %lld.\n", find, temp[l - 1]);
						}
						break;
					}
					l++;
				}
				if(l == size)
				{
					printf("Closest sum to %lld is %lld.\n", find, temp[l - 1]);
				}
			}
			
		}
		
		scanf("%d", &t);
		c++;
	}
	return 0;
}