#include <iostream>
#include <math.h>

using namespace std;



int main() {
	
	long long int ppl, budget, hotel, week;
	while(scanf("%lld %lld %lld %lld", &ppl, &budget, &hotel, &week) != EOF)
	{
		long long int minim = pow(2, 30);
		for(int c = 0; c < hotel; c++)
		{
			long long int price = 0;
			scanf("%lld", &price);
			long long int avail = 0;
			bool flag = false;
			
			for(int i = 0; i < week; i++)
			{
				scanf("%lld", &avail);
				if(avail >= ppl)
				{
					flag = true;
				}
			}
			
			if(flag && (price * ppl) <= budget)
			{
				minim = min(minim, price * ppl);
			}
		}
		
		if(minim == pow(2, 30))
		{
			printf("stay home\n");
		}
		else
		{
			printf("%lld\n", minim);
		}
	}
	
	return 0;
}