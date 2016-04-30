#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	
	int n = 0;
	scanf("%d", &n);
	
	for(int c = 0; c < n; c++)
	{
		int n1 = 0;
		int n2 = 0;
		
		scanf("%d %d", &n1, &n2);
		if(n1 > n2)
		{
			printf(">\n");
		}
		else if(n1 < n2)
		{
			printf("<\n");
		}
		else
		{
			printf("=\n");
		}
		
		
	}
	return 0;
}