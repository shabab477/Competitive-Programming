#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int bSearch(int low, int high, long long int num, long long int array[])
{
	if(low > high)
	{
		return -1;
		
	}
	else
	{
		int mid = (low + high) / 2;
		if(array[low] == num)
		{
			return low;
		}
		else if(array[high] == num)
		{
			return high;
		}
		else if(array[mid] == num)
		{
			return mid;
		}
		
		if(array[mid] > num)
		{
			return bSearch(low + 1, mid - 1, num, array);
		}
		else
		{
			return bSearch(mid + 1, high - 1, num, array);
		}
		
	}
}

int main() {
	
	int n = 0;
	scanf("%d", &n);
	
	for(int c = 0; c < n; c++)
	{
		long long int size1 = 0;
		long long int size2 = 0;
		
		scanf("%lld", &size1);
		long long int n1 = 0;
		scanf("%lld", &n1);
		long long int d1= 0 ;
		scanf("%lld", &d1);
		
		long long int array1[size1];
		array1[0] = n1;
		
		for(long long int i = 2; i <= size1; i++)
		{
			array1[i - 1] = n1 + d1;
			n1 += d1;
		}
		
		scanf("%lld", &size2);
		long long int n2 = 0;
		scanf("%lld", &n2);
		long long int d2= 0 ;
		scanf("%lld", &d2);
		long long int array2[size2];
		
		array2[0] = n2;
		
		for(long long int i = 2; i <= size2; i++)
		{
			array2[i - 1] = n2 + d2;
			n2 += d2;
		}
		
		long long int sum = 0;
		sort(array1, array1 + size1);
		sort(array2, array2 + size2);
		for(int i = 0; i < size1; i++)
		{
			int result = bSearch(0, size2, array1[i], array2);
			if(result != -1)
			{
				sum++;
			}
		}
		
		printf("%lld\n", sum);
		
	}
	return 0;
}