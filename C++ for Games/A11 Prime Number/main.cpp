#include <iostream>
#include <limits>


int main()
{
	int input;
	unsigned int num;
	int max, min;

	std::cout << "Enter a natural number: " << std::endl;
	std::cin >> input;

	while (std::cin.fail() || input < 0)
	{
		std::cerr << "ERROR: Please enter a valid natural number." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> input;
	}

	std::cout << "Enter a min: " << std::endl;
	std::cin >> min;

	while (std::cin.fail() || min < 0)
	{
		std::cerr << "ERROR: Please enter a valid natural number." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> min;
	}

	std::cout << "Enter a max: " << std::endl;
	std::cin >> max;

	while (std::cin.fail() || max < 0 || max <= min )
	{
		std::cerr << "ERROR: Please enter a valid natural number." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> max;
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

	std::cout << "Prime Numbers in range from " << min << " to " << max << " are: " << std::endl;

	for (int i = min;i <= max;++i)
	{
		bool isPrime = true;

		if (i <= 1)
		{
			isPrime = false;
		}
		else
		{
			for (int j = 2;j * j <= i;++j)
			{
				if (i % j == 0)
				{
					isPrime = false;
					break; //so we dont need to check every number when we alr found one
				}
			}
		}

		if (isPrime == 1)
		{
			std::cout << i << std::endl;
		}
	}
	return 0;
}