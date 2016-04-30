#include <iostream>
#include <algorithm>
using namespace std;

int array[50];

int main() {
	
	int test = 0;
	scanf("%d", &test);
	while(test--)
	{
		int str = 0;
		scanf("%d", &str);
		for(int c = 0; c < str; c++)
		{
			scanf("%d", &array[c]);
		}
		
		sort(array, array + str);
		printf("%d\n", (array[str - 1] - array[0]) * 2);
	}
	return 0;
}
