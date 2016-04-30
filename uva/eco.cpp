#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	
	int test;
	scanf("%d", &test);
	for(int te = 0; te < test; te++)
	{
		int x, y, z;
		int n = 0;
		
		scanf("%d", &n);
		
		long long int sum = 0;
		for(int c = 0; c < n; c++)
		{
			scanf("%d %d %d", &x, &y, &z);
			sum += (x * z);
		}
		
		printf("%lld\n", sum);
	}
	return 0;
}