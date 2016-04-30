#include <iostream>
#include <string.h>
#include <math.h>
#include <string>
using namespace std;


long long int sum(string stArray, int base, int len)
{
	long long int total = 0;
	long int power = 0;
	for(int i = len - 1; i >= 0; i--)
	{
		
		long long int ascii = (int)stArray.at(i);
		if(ascii >= 48 && ascii <= 57)
		{
			total += ((ascii - 48) *  pow(base, power));
		}
		else
		{
			total += ((ascii - 55) * pow(base, power));
		}
		power++;
	}
	return total;
}

long long int base(string array, int len)
{
	long long int max = -1;
	//printf("%d\n", len);
	for(int c = 0; c < len; c++)
	{
		//printf("here\n");
		long long int b = 0;
		long long int ascii = (int)array.at(c);
		if(ascii >= 48 && ascii <= 57)
		{
			b = ascii - 48;
		}
		else if(ascii >= 65 && ascii <= 90)
		{
			b = ascii - 55;
		}
		if(b > max)
		{
			max = b;
		}
	}
	return max + 1;
}

int main() {
	
	string s = "";
	
	getline(cin, s);
	//printf("%s", array);
	
	long long int len = s.length();
//	printf("%d", len);
	bool flag = true;
	
	long long int start = base(s, len);
	
	//printf("%d\n", start);
	if(start != 0 && start != 1)
	{
		for(long long int k = start; k <= 36; k++)
		{
			
			long long int num = sum(s, k, len);
			if(num % (k - 1) == 0)
			{
				printf("%lld\n", k);
				flag = false;
				break;
			}
		}
	}
	
	
	if(flag)
	{
		printf("No solution.\n");
	}
	return 0;
}