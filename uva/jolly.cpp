#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	
	int n = 0;
	while(scanf("%d", &n) != EOF)
	{
		int array[n];
		for(int c = 0; c < n; c++)
		{
			scanf("%d", &array[c]);
		}
		
		int myArray[n - 1];
		for(int c = 1; c < n; c++)
		{
			myArray[c - 1] = abs(array[c] - array[c - 1]);
		}
		
		bool flag = false;
		sort(myArray, myArray + n - 1);
		
		int num = n - 1;
		for(int c = n - 2; c >= 0; c--)
		{
			if(myArray[c] != num)
			{
				//printf("%d %d\n", myArray[c], num);
				flag = true;
				break;
			}
			num--;
			
		}
		
		if(flag)
		{
			
		
			printf("Not jolly\n");
		}
		else
		{
			
			printf("Jolly\n");
		}
	}
	
	
	
	return 0;
}