#include <iostream>
using namespace std;
#include <stdio.h>
#include <math.h>
int num[3];

int main() {
	
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	
	
	while(num[0] != 0 && num[1] != 0 && num[2] != 0)
	{
		bool flag = false;
		for(int c = 0; c < 3; c++)
		{
			int sum = 0;
			
			sum = pow(num[c % 3], 2) + pow(num[(c + 1) % 3], 2);
			
			if(pow(num[(c + 2) % 3], 2) == sum)
			{
				flag = true;
				break;
			}
			
		}
		
		if(flag)
		{
			printf("right\n");
		}
		else
		{
			printf("wrong\n");
		}
		
		scanf("%d %d %d", &num[0], &num[1], &num[2]);
	}
	
	return 0;
}