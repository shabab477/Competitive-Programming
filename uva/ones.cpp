#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	
	long long int num = 0;
	
	while(scanf("%lld", &num) != EOF)
	{
		long long int value = 1;
		int count = 1;
		while(value % num != 0)
		{
			value = ((value * 10) + 1) % num;
			count++;
		}
		
		printf("%d\n", count);
	}
	
	return 0;
}