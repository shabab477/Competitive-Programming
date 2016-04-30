#include <iostream>
using namespace std;
#include <string.h>

char tmp[30];
int present = 0;
int count = 0;

void countSteps(char array[])
{
	if(array[0] == 'A' || array[0] == 'P' || array[0] == 'O' || array[0] == 'R')
	{
		count += abs(0 - present);
		present = 0;
	}
	else if(array[0] == 'B' || array[0] == 'M' || array[0] == 'S')
	{
		count += abs(1 - present);
		present = 1;
	}
	else
	{
		count += abs(2 - present);
		present = 2;
	}
	
}


int main() {
	
	int n = 0;
	
	scanf("%d", &n);
	
	for(int c = 0; c < n; c++)
	{
		scanf("%s", tmp);
		countSteps(tmp);
	}
	
	printf("%d", count);
	return 0;
}