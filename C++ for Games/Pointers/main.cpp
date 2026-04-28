#include <iostream>

int main()
{
	int i = 3;
	const char* name = "Viktoria";

	int* pi = &i;

	std::cout << "Address of i: " << pi << std::endl;
	std::cout << "Value of i: " << *pi << std::endl;

	*pi = 4;

	std::cout << "Value of i: " << *pi << std::endl;

	if (*pi == i)
	{
		std::cout << "The values are both: " << i << std::endl;
	}

	std::cout << "The first letter of " << name << " is " << name[0] << std::endl;

	const char* const lastName = "Kratka";
	// lastName = name; cant do this cuz the point where the pointer is pointing (xd what is that sentence) cannot be modified 

	const int values[] = {1, 2, 3, 4};
	std::cout << *(values + 1) << std::endl;

	return 0;
}