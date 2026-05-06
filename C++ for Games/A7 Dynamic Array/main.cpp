#include <iostream>
#include <limits>

int main()
{
	int arrsize;

	std::cout << "Enter the size of the array greater than 0 and less than or equal to 10: " << std::endl;
	std::cin >> arrsize; 

	while (std::cin.fail())
	{
		std::cout << "ERROR: Please enter a valid number." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> arrsize;

	}

	while (arrsize <= 0 || arrsize > 10)
	{
		std::cout << "ERROR: Please enter a number from 1 to 10." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> arrsize;

	}

	int* array = new int[arrsize];
	
	for (int i = 0; i < arrsize; ++i)
	{
		std::cout << "Enter value number " << i + 1 << ": " << std::endl;
		std::cin >> array[i];

		while (std::cin.fail())
		{
			std::cout << "ERROR: Invalid input. Try again: " << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin >> array[i];

		}
	}

	int min = array[0];
	int max = array[0];
	int sum = 0;

	for (int i = 0; i < arrsize; ++i)
	{
		if (array[i] < min)
		{
			min = array[i];
		}

		if (array[i] > max)
		{
			max = array[i];
		}

		sum += array[i];
	}

	float average = static_cast<float>(sum) / arrsize;

	//outputs
	std::cout << "The minimal value is: " << min << std::endl;
	std::cout << "The maximal value is: " << max << std::endl;
	std::cout << "The average value is: " << average << std::endl;

	delete[] array;

	return 0;
}