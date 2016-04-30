#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>

using namespace std;

long long int mod = 0;

struct myClass
{
	long long int value = 0;
	long long int modValue = 0;
	
	bool operator()(const myClass& x, const myClass& y) const{
		
		
		if(x.modValue != y.modValue)
		{
			return x.modValue < y.modValue;
		}
		else
		{
			if(abs(x.value) % 2 == 1 && abs(y.value) % 2 == 0)
			{
				
				return true;
			}
			else if(abs(x.value) % 2 == 0 && abs(y.value) % 2 == 1)
			{
				
				return false;
			}
			else if(abs(x.value) % 2 == 0 && abs(y.value) % 2 == 0)
			{
				
				return x.value < y.value;
			}
			else if(abs(x.value) % 2 == 1 && abs(y.value) % 2 == 1)
			{
				
				return x.value > y.value;
			}
		}
		
	}
};

int main() {
	
	int n = 0;
	
	scanf("%d", &n);
	scanf("%lld", &mod);
	while(n != 0 && mod != 0)
	{
		
		
		myClass array[n];
		printf("%d %d\n", n, mod);
		for(int c = 0; c < n; c++)
		{
			long long int num = 0;
			scanf("%lld", &num);
			array[c].value = num;
			array[c].modValue = num % mod;
		}
	
		sort(array, array + n, array[0]);
		
		for(int c = 0; c < n; c++)
		{
			printf("%lld\n", array[c]);
		}
		
		
	
		
		scanf("%d", &n);
		scanf("%lld", &mod);
		
		
	}
	
	printf("0 0\n");
	return 0;
}