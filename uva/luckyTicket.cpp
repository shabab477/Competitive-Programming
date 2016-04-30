#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n = 0;
	
	scanf("%d", &n);
	int count =1;
	
	for(int c = pow(10, n / 2); c < pow(10, n); c += pow(10, n / 2))
	{
		count += 2;
	}
	
	printf("%d", count);
	return 0;
}