#include <iostream>
#include <string>
//#include <boost/lambda/lambda.hpp>

using namespace std;

int count_x(char* p, char x)
// count the number of occurrences of x in p[]
// p is assumed to point to a zero-ter minated array of char (or to nothing)
{
	if (p == nullptr) return 0;
	int count = 0;
	for (; p != nullptr; ++p)
		if (*p == x)
			++count;
	return count;
}

int main() {

	std::cout << "OMG";
	std::cin.get();

	return 0;

}