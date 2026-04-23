#include <iostream>
#include <string>
#include <limits>

int main()
{
	std::string name;
	int age;

	std::cout << "What is your name?" << std::endl;
	std::cin >> name;

	std::cout << "What is your age?" << std::endl;
	std::cin >> age;

	while (std::cin.fail() || age < 0)
	{
		std::cout << "ERROR: A non-negative number is expected." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> age;

	}
	
	if (age < 25)
	{
		std::cout << "Hello " << name;
		std::cout << ", you are only " << age << " years old." << std::endl;
	}
	else if (age < 50)
	{
		std::cout << "Hello " << name;
		std::cout << ", you are already " << age << " years old." << std::endl;
	}
	else 
	{
		std::cout << "Hello " << name;
		std::cout << ". You are very wise for your age." << std::endl;
	}


	std::cout << "Press enter to continue..." << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

	return 0;

}