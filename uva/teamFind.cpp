#include <iostream>
#include <stdio.h>

using namespace std;

long long int n;
long long int m;

int main() {
	
	scanf("%lld %lld", &n, &m);
	
	long long int d = (n / m);
	long long int extraSpace = (n - (d * m));
	
	long long int minVal = (extraSpace * (((d + 1) * d) / 2)) + ((m - extraSpace) * ((d * (d - 1)) / 2));
	long long int firstPlace = (n - (m - 1));
	long long int maxVal = (firstPlace * (firstPlace - 1)) / 2;
	
	printf("%lld %lld\n", minVal, maxVal);
	
	return 0;
}
