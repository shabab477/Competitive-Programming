#include <iostream>
using namespace std;

#include <stdio.h>

string s = "";


int main() {
	
	int n = 0;
	
	scanf("%d", &n);
	
	for(int c = 1; c <= n; c++)
	{
		s = "";
		long long int n1 = 0;
		long long int n2 = 0;
		long long int count = 0;
		long long int sum = 0;
		
		scanf("%lld", &n1);
		scanf("%lld", &n2);
		
		for(long long int i = 1; i < n1; i++)
		{
			sum += i;
		}
		
		for(long long int i = n1; i <= n2; i++)
		{
			sum += i;
			if(sum % 3 == 0)
			{
				count++;
			}
		}
		
		printf("Case %d: %lld\n", c, count);
	}
	
	return 0;
}