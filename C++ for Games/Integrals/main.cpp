#include <iostream>
#include <cstdint>

int main()
{
	int min_int = -2147483647;
	int max_int = 2147483647;

	// unsigned int max_uint = 4294967295;
	unsigned int min_uint = 0;
	unsigned int max_uint = -1;

	std::cout << "Sizeog int: " << sizeof(int) << std::endl;
	std::cout << "Min uint (-1): " << max_uint << std::endl;


	return 0;
}