#include <iostream>
using namespace std;

int array[100][100];

int main() {
	
	int n = 0;
	
	scanf("%d", &n);
	
	int count = 1;
	int c = 0;
	for(c = n - 1; c >= 0; c--)
	{
		int row = 0;
		int col = c;
		
		while(col <= n -1)
		{
			array[row][col] = count;
			row++;
			col++;
			count++;
		}
	}
	
	for(int c = 1; c <= n - 1; c++)
	{
		int row = c;
		int col = 0;
		
		while(row <= n - 1)
		{
			array[row][col] = count;
			row++;
			col++;
			count++;
		}
	}
	
	
	for(int c = 0; c < n; c++)
	{
		for(int i = 0; i < n; i++)
		{
			printf("%d ", array[c][i]);
		}
		printf("\n");
	}
	
	return 0;
}