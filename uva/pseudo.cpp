#include <iostream>
#include <stdio.h>
#include <string.h>
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
	
	long long int step = 0;
	long long int mod = 0;
	
	while(scanf("%lld %lld", &step, &mod) != EOF)
	{
		if(gcd(step, mod) == 1)
		{
			string ch = "Good Choice";
			printf("%10lld%10lld    %s\n", step, mod, ch.c_str());
			printf("\n");
		}
		else
		{
			string ch = "Bad Choice";
			printf("%10lld%10lld    %s\n", step, mod, ch.c_str());
			printf("\n");
		}
		
	}
	
	return 0;
}