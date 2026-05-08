#include <iostream>
#include <limits>


int main()
{
	int input;
	unsigned int num;

	std::cout << "Enter a natural number: " << std::endl;
	std::cin >> input;

	while (std::cin.fail() || input < 0)
	{
		std::cerr << "ERROR: Please enter a valid natural number." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> input;
	}

	num = static_cast<unsigned int>(input);
	bool isPrime = true;

	if (num <= 1)
	{
		isPrime = false;
	}
	else
	{
		for (unsigned int i = 2;i * i <= num;++i)
		{
			if (num % i == 0)
			{
				isPrime = false;
				break; //so we dont need to check every number when we alr found one
			}
		}
	}

	if (isPrime == true)
	{
		std::cout << "The number " << num << " is prime." << std::endl;
	}
	else
	{
		std::cout << "The number " << num << " is not prime." << std::endl;
	}
	return 0;
}