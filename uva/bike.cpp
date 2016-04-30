#include <iostream>
using namespace std;

int main() {
	
	int l1 = 0;
	int l2 = 0;
	scanf("%d", &l1);
	scanf("%d", &l2);
	
	if(l1 % 2 == 0 || l2 % 2 == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no");
	}
	
	return 0;
}