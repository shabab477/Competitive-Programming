#include <iostream>
using namespace std;

int main() {
	
	double pi = 3.1415926535897;
	
	int t = 0;
	scanf("%d", &t);
	for(int c = 0; c < t; c++)
	{
		double len = 0;
		scanf("%lf", &len);
		
		double width = (len / 10) * 6;
		double radius = (len / 5) * 1;
		
		printf("%.2lf %.2lf\n", pi * radius * radius, (len * width) - (pi * radius * radius));
	}
	return 0;
}