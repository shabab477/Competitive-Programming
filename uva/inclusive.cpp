#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	
	int t = 0;
	
	scanf("%d", &t);
	if(t <= 1)
	{
		long long int sum = 0;
		
		for(int c = t; c <= 1; c++)
		{
			sum += c;
		}
		
		printf("%lld\n", sum);
	}
	else
	{
		long long int sum = 0;
		
		for(int c = t; c >= 1; c--)
		{
			sum += c;
		}
		
		printf("%lld\n", sum);
	}
	return 0;
}