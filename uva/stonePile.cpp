#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;


long long int minimum = pow(2, 31);
long long int array[25];

void call(long long int array[], int current, long long int sum1, long long int sum2,  int n)
{
	if(current > n)
	{
		minimum = min(abs(sum1 - sum2), minimum);
	}
	else
	{
		call(array, current + 1, sum1 + array[current], sum2, n);
		call(array, current + 1, sum1, sum2 + array[current], n);
	}
}



int main() {
	
	
	int n = 0;
	scanf("%d", &n);
	
	for(int c = 0; c < n; c++)
	{
		scanf("%lld", &array[c]);
	}
	
	call(array, 0, 0, 0, n);
	printf("%lld\n", minimum);
	return 0;
}