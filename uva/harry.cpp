#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	
	
	int harry = 0;
	int larry = 0;
	scanf("%d", &harry);
	scanf("%d", &larry);
	
	harry -= 1;
	larry -= 1;
	
	int sum = harry + larry;
	printf("%d %d\n", (sum - harry), (sum - larry));
	return 0;
}