#include <string.h>
#include <stdio.h>
#include <stack>
#include <iostream>
using namespace std;

stack<char> st;

string line;

void clear()
{
	while(!st.empty())
	{
		st.pop();
	}
}

int main() {
	
	int tc = 0;
	scanf("%d", &tc);
	
	getline(cin, line);
	
	while(tc--)
	{
		bool flag = true;
		getline(cin, line);
		int sz = line.length();
		
		for(int c = 0; c < sz; c++)
		{
			if(line[c] == '(' || line[c] == '[' || line[c] == '{')
			{
				st.push(line[c]);
			}
			else if(line[c] == ')' || line[c] == ']' || line[c] == '}')
			{
				if(!st.empty())
				{
					char ch = st.top();
					
					if(ch == '(' && line[c] == ')')
					{
						st.pop();
					}
					else if(ch == '[' && line[c] == ']')
					{
						st.pop();
					}
					else if(ch == '{' && line[c] == '}')
					{
						st.pop();
					}
					else
					{
						flag = false;
						break;
					}
				}
				else
				{
					flag = false;
					break;
					
				}
			}
		}
		
		if(!flag)
		{
			printf("No\n");
		}
		else
		{
			if(!st.empty())
			{
				printf("No\n");
			}
			else
			{
				printf("Yes\n");
			}
		}
		
		clear();
	}
	return 0;
}