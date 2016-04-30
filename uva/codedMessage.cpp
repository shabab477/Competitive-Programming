#include <iostream>
using namespace std;
#include <stdio.h>
#include <string>

int main() {
	string line = "";
	int n = 0;
	
	scanf("%d", &n);
	getline(cin, line);
	getline(cin, line);
	getline(cin, line);
	
	for(int c = 1; c <= n; c++)
	{
		
		
		printf("Case #%d:\n", c);
		
		
		while(line.length() != 0)
		{
			string answer = "";
			int count = 0;
			for(int i = 0; i < line.length(); )
			{
				string word = "";
				
				while(i < line.length() && line.at(i) != ' ')
				{
					
					word += line.at(i);
					i++;
				}
				
				i += 1;
				
				
				if(count < word.length())
				{
					answer += word.at(count);
					count++;
				}
		
			}
			printf("%s\n", answer.c_str());
			getline(cin, line);
		}
		if(c + 1 <= n)
		{
			printf("\n");
		}
		getline(cin, line);
	}
	return 0;
}