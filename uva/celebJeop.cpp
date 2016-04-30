#include <iostream>
#include <string.h>
#include <cstring>
#include <string>
using namespace std;

int main() {
	
	while(true)
	{
		string s = "";
		getline(cin, s);
		if(s.length() == 0)
		{
			break;
		}
		else
		{
			printf("%s\n", s.c_str());
		}
	}
	
	return 0;
}