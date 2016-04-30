#include <iostream>

using namespace std;

char point[2];
int count = 0;

void isValid(int row, int col)
{
	if(row <= 7 && row >= 0 && col <= 7 && col >= 0)
	{
			count++;
	}
}

int main() {
	
	int n = 0;
	
	scanf("%d", &n);

	
	
	
	for(int c = 0; c < n; c++)
	{
		scanf("%s", &point);
		int row = (int)point[1] - 49;
		int col = (int)point[0] - 97;
		
		if(row >= 0 && col >= 0)
		{
			isValid(col + 2, row - 1);
			isValid(col + 2, row + 1);
			isValid(col - 2, row + 1);
			isValid(col - 2, row - 1);
			isValid(col + 1, row + 2);
			isValid(col - 1, row + 2);
			isValid(col + 1, row - 2);
			isValid(col - 1, row - 2);
		}
		
		printf("%d\n", count);
		count = 0;
		
	}
	
	
	
	return 0;
}