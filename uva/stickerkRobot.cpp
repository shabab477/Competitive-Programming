#include <iostream>
#include <string>
#include <string.h>
#include <cstring>
using namespace std;

bool faceLeft = false;
bool faceRight = false;
bool faceUp = false;
bool faceDown = false;

void headRight()
{
	if(faceLeft)
	{
		faceUp = true;
		faceDown = false;
		faceLeft = false;
		faceRight = false;
		
	}
	else if(faceUp)
	{
		faceUp = false;
		faceDown = false;
		faceLeft = false;
		faceRight = true;
		
	}
	else if(faceRight)
	{
		faceUp = false;
		faceDown = true;
		faceLeft = false;
		faceRight = false;
		
	}
	else
	{
		faceUp = false;;
		faceDown = false;
		faceLeft = true;
		faceRight = false;
		
	}

}


void headLeft()
{
	if(faceUp)
	{
		faceUp = false;
		faceDown = false;
		faceLeft = true;
		faceRight = false;
		
	}
	else if(faceLeft)
	{
		faceUp = false;
		faceDown = true;
		faceLeft = false;
		faceRight = false;
		
	}
	else if(faceDown)
	{
		faceUp = false;
		faceDown = false;
		faceLeft = false;
		faceRight = true;
		
	}
	else
	{
		faceUp = true;
		faceDown = false;
		faceLeft = false;
		faceRight = false;
		
	}
}

char array[101][101];
char input[6 * 10000];

int main() {
	
	
	int n = 0;
	int m = 0;
	int s = 0;
	
	scanf("%d %d %d", &n, &m, &s);
	
	while(n != 0 && m != 0 && s != 0)
	{
		
		faceUp = false;
		faceDown = false;
		faceLeft = false;
		faceRight = false;
		
		int startR = 0;
		int startC = 0;
		bool flag = true;
		for(int c = 0; c < n; c++)
		{
			scanf("%s", &array[c]);
			if(flag)
			{
				for(int i = 0; i < m; i++)
				{
					if(array[c][i] == 'N')
					{
						faceUp = true;
						startR = c;
						startC = i;
						flag = false;
						break;
					}
					else if(array[c][i] == 'S')
					{
						faceDown = true;
						startR = c;
						startC = i;
						flag = false;
						break;
					}
					else if(array[c][i] == 'L')
					{
						faceRight = true;
						startR = c;
						startC = i;
						flag = false;
						break;
					}
					else if(array[c][i] == 'O')
					{
						faceLeft = true;
						startR = c;
						startC = i;
						flag = false;
						break;
					}
				}
			}
			
		}
		// printf("%d %d\n", startR, startC);
		// printf("Up: %d Do: %d Left: %d Right: %d\n", faceUp, faceDown, faceLeft, faceRight);
		scanf("%s", &input);
		int count = 0;
		
		for(int c = 0; c < s; c++)
		{
			if(input[c] == 'D')
			{
				headRight();
			}
			else if(input[c] == 'E')
			{
				headLeft();
			}
			else
			{
				if(faceLeft && startC - 1 >= 0 && array[startR][startC - 1] != '#')
				{
					startC--;
					if(array[startR][startC] == '*')
					{
						count++;
						array[startR][startC] = '.';
					}
					
				}
				else if(faceRight && startC + 1 < m && array[startR][startC + 1] != '#')
				{
					startC++;
					if(array[startR][startC] == '*')
					{
						count++;
						array[startR][startC] = '.';
					}
				}
				else if(faceUp && startR - 1 >= 0 && array[startR - 1][startC] != '#')
				{
					startR--;
					if(array[startR][startC] == '*')
					{
						count++;
						array[startR][startC] = '.';
					}
				}
				else if(faceDown && startR + 1 < n && array[startR + 1][startC] != '#')
				{
					startR++;
					if(array[startR][startC] == '*')
					{
						count++;
						array[startR][startC] = '.';
					}
				}
			}
		}
		printf("%d\n", count);
		// for(int c = 0; c < n; c++)
		// {
		// 	for(int i = 0; i < m; i++)
		// 	{
		// 		printf("%c", array[c][i]);
		// 	}
		// 	printf("\n");
		// }
		
		// printf("%s\n", input);
		scanf("%d %d %d", &n, &m, &s);
	}
	return 0;
}