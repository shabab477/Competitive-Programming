#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int calc(long long int base, long long int power, long long int mod)
{
	if(power == 0)
	{
		return 1;
	}
	else
	{
		long long int val = calc(base, power / 2, mod);
		
		if(power % 2 == 1)
		{
			return ((val * val * base) % mod);
		}
		else
		{
			return ((val * val) % mod);
		}
	}
}


int main() {
	
	long long int base = 0;
	long long int power = 0;
	long long int mod = 0;
	
	while(scanf("%lld %lld %lld", &base, &power, &mod) != EOF)
	{
		long long int sum = calc(base, power, mod);
		printf("%lld\n", sum);
	}
	return 0;
}