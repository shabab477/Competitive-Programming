#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int array[200];
string line;

void clear()
{
	for(int c = 65; c < 123; c++)
	{
		array[c] = 0;
	}
}

int main() {
	
	while(getline(cin, line))
	{
		int sz = line.length();
		int maxim = -1;
		
		for(int c = 0; c < sz; c++)
		{
			if((line[c] >= 65 && line[c] <= 90) || (line[c] >= 97 && line[c] <= (int)'z'))
			{
				array[(int)line[c]]++;
				if(array[(int)line[c]] > maxim)
				{
					maxim = array[(int)line[c]]; 
				}
				
			}
			
		}
		
		for(int c = 65; c <= 90; c++)
		{
			if(array[c] == maxim)
			{
				printf("%c", c);
			}
		}
		
		for(int c = 97; c <= 122; c++)
		{
			if(array[c] == maxim)
			{
				printf("%c", c);
			}
		}
		
		printf(" %d\n", maxim);
		clear();
	}
	
	return 0;
}