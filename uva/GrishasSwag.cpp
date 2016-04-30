#include <iostream>
using namespace std;

int n = 0;

int main() {

	scanf("%d", &n);
	
	n = 12 - n;
	
	if((240 - (n * 45)) < 0)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
	
	
	return 0;
}