#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;



int main()
{
	int t = 0;
	int rows = 0;
	int cols = 0;
	
	scanf("%d", &t);
	
	
	string s = "";
	
	
	for(int i = 0; i < t; i++)
	{
		scanf("%d", &rows);
		scanf("%d", &cols);
		getline(cin, s);
		
		
		char array[rows][cols];
		for(int c = 0; c < rows; c++)
		{
			getline(cin, s);
			for(int j = 0; j < cols; j++)
			{
				array[c][j] = tolower(s.at(j));
			}
		}
		
		bool flag = true;;
		string spoon = "spoon";
		//row check
		
		for(int c = 0; c < rows; c++)
		{
			for(int j = 0; j < cols; j++)
			{
				for(int k = 0; (j + 5) <= cols && k < 5; k++)
				{
					if(array[c][j + k] == spoon.at(k))
					{
						flag = true;
					}
					else
					{
						flag = false;
						break;
					}
				}
				if(flag)
				{
					break;
				}
			}
			if(flag)
			{
				break;
			}
		}
		
		if(!flag)
		{
			for(int i = 0; i < cols; i++)
			{
				for(int c = 0; c < rows; c++)
				{
					for(int k = 0; (c + 5) <= rows && k < 5; k++)
					{
						if(array[c + k][i] == spoon.at(k))
						{
							flag = true;
						}
						else
						{
							flag = false;
							break;
						}
					}
					if(flag)
					{
						break;
					}
				}
				if(flag)
				{
					break;
				}
			}
		}
		
		if(flag)
		{
			printf("There is a spoon!\n");
		}
		else
		{
			printf("There is indeed no spoon!\n");
		}
		
		
		
	}
	
	
	return 0;
}