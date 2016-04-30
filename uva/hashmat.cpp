#include <iostream>
#include <vector>
#include <cstring>
#include <string.h>
#include <string>
#include <sstream>
using namespace std;


vector<long long int> vect;
long long int enterNumber;

int main() {
	std::string line;
	while(getline(std::cin, line))
	{
		std::istringstream iss(line);
		while (iss >> enterNumber)
		{
		    vect.push_back(enterNumber);
		}
		
		if(vect[0] < vect[1])
		{
			printf("%lld\n", vect[1] - vect[0]);
		}
		else
		{
			printf("%lld\n", vect[0] - vect[1]);
		}
		vect.clear();
	}
	return 0;
}