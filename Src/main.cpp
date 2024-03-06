#include <Array.h>
#include <iostream>

int main()
{
	BAL::Array<uint> lmao;
	lmao.push_back(1);
	std::cout << "hello world" << lmao.at(1) << std::endl;
	return 1;
}
