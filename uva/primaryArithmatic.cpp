#include <iostream>
using namespace std;

int main() {
	
	long long int num1 = 0;
	long long int num2 = 0;
	
	scanf("%lld %lld", &num1, &num2);
	
	while(num1 != 0 || num2 != 0)
	{
		int carry = 0;
		int count = 0;
		while(num1 != 0 || num2 != 0)
		{
			int sum = (num1 % 10) + (num2 % 10) + carry;
			if(sum >= 10)
			{
				count++;
				carry = 1;
			}
			else
			{
				carry = 0;
			}
			num1 /= 10;
			num2 /= 10;
		}
		
		if(count == 0)
		{
			printf("No carry operation.\n");
		}
		else if(count == 1)
		{
			printf("1 carry operation.\n");
		}
		else
		{
			printf("%d carry operations.\n", count);
		}
		scanf("%lld %lld", &num1, &num2);
	}
	return 0;
}