#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	
	 int n = 0;
	 scanf("%d", &n);
	 
	 for(int c = 0; c < n; c++)
	 {
	 	double num = 0;
	 	scanf("%lf", &num);
	 	num = num * 2 * -1;
	 	
	 	long long int value = (long long int)((-1 + sqrt(1 -  (4 * num))) / 2);
	 	
	 	printf("%lld\n", value);
	 	
	 }
	return 0;
}