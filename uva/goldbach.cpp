#include <iostream>
using namespace std;

int prime[1000005];
int flag[1000005];
int size = 0;
void initPrimes()
{
	prime[size] = 2;
	size++;
	flag[2] = false;
	for(int c = 3; c <= 1000001; c += 2)
	{
		if(!flag[c])
		{
			prime[size] = c;
			size++;
			int mult = 2;
			for(int i = c * mult; i <= 1000001; i = c * mult)
			{
			flag[i] = true;
			mult++;
			}
		}
	}
}
int main() {
	initPrimes();
	int n = 0;
	scanf("%d", &n);
	while(n != 0)
	{
		int answer1 = -1;
		int answer2 = -1;
		for(int c = 2; c <= n / 2; c++)
		{
		int other = n - c;
		//printf("%d :  %d    %d\n", c, flag[c], flag[other]);
		if((c == 2))
		{
		if(!flag[other] && other % 2 == 1)
		{
		answer1 = c;
		answer2 = other;
		break;
		}
		}
		else if(c % 2 == 1 && !flag[other] && !flag[c] && other % 2 == 1)
		{
		answer1 = c;
		answer2 = other;
		break;
		}
		}
		if(answer1 == -1 || answer2 == -1)
		{
		printf("Goldbach's conjecture is wrong.\n");
		}
		else
		{
		printf("%d = %d + %d\n", n, answer1, answer2);
		}
		scanf("%d", &n);
	}
return 0;
}
