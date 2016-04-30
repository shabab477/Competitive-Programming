#include <iostream>
#include <stdio.h>
#include <algorithm>

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
	
	for(int c = 0; c < n; c++)
	{
		long long int num1 = 0;
		long long int num2 = 0;
		
		scanf("%lld %lld", &num1, &num2);
		
		long long int g = gcd(num1, num2);
		
		long long int lcm = (num2 * num1) / g;
		if(g == num1 && lcm == num2)
		{
			printf("%lld %lld\n", g, lcm);
		}
		else
		{
			printf("-1\n");
		}
				
	}
	
	return 0;
}