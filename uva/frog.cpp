#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	
	int n = 0;
	scanf("%d", &n);
	
	int num1 = 1;
	int num2 = n;
	int i = 0;
	for(int c = 0; c < n - 1; c++, i++)
	{
		if(c % 2 == 0)
		{
			printf("%d ", num1);
			num1++;
		}
		else
		{
			printf("%d ", num2);
			num2--;
		}
	}
	
	if(i % 2 == 0)
	{
		printf("%d\n", num1);
	}
	else
	{
		printf("%d\n", num2);
	}
	
	return 0;
}