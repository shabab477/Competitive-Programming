#include <iostream>
#include <stdio.h>
using namespace std;

void travel(int day, double h, double d, double u, double fRate, double current, double f)
{
	
	if(current < 0)
	{
		printf("failure on day %d\n", day - 1);
	}
	else
	{
		if(f < u)
		{
			current += u - f;
		}
		//printf("current: %.3lf\n", current);
		if(current > h)
		{
			printf("success on day %d\n", day);
		}
		else
		{
			travel(day + 1, h, d, u, fRate, current - d, f + fRate);
		}
	}
}


int main() {
	
	double h = 0;
	double u = 0;
	double d = 0;
	double f = 0;
	
	scanf("%lf %lf %lf %lf", &h, &u, &d, &f);
	while(h != 0)
	{
		f = (f / 100) * u;
		travel(1, h, d, u, f, 0,  0);
		scanf("%lf %lf %lf %lf", &h, &u, &d, &f);
	}
	
	
	return 0;
}