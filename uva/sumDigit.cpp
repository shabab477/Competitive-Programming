#include <iostream>
using namespace std;

int main() {
	
	int n = 0;
	scanf("%d", &n);
	
	while(n != 0)
	{
		int sum = n;
		while(n >= 10)
		{
		 	sum  = 0;
		 	//printf("here");
		 	while(n != 0)
		 	{
		 		sum += n % 10;
		 		n /= 10;
		 	}
		 	n = sum;
		}
		
		printf("%d\n", sum);
		scanf("%d", &n);
	}
	return 0;
}
