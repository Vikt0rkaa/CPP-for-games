#include <iostream>
#include <limits>

int main()
{
	//variables
	double num1, num2;
	char op;

	//1st number
	std::cout << "Enter the first number: " << std::endl;
	std::cin >> num1;

	while (std::cin.fail())
	{
		std::cerr << "ERROR: Please enter a valid number. " << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> num1;
	}

	//operator
	std::cout << "Enter an operator (+,-,*,/): " << std::endl;
	std::cin >> op;

	while(op != '+' && op != '-' && op != '*' && op != '/')
	{
		std::cerr << "ERROR: Please enter a valid operator (+,-,*,/)." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> op;
	}

	//2nd number
	std::cout << "Enter the second number: " << std::endl;
	std::cin >> num2;

	while (std::cin.fail())
	{
		std::cerr << "ERROR: Please enter a valid number. " << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> num2;
	}

	//division w 0
	if (op == '/' && num2 == 0)
	{
		std::cerr << "ERROR: Cannot divide by zero." << std::endl;
		return 1;
	}

	//calculation 
	double solution;
	if (op == '+')
	{
		solution = num1 + num2; 
	}
	else if (op == '-')
	{
		solution = num1 - num2;
	}
	else if (op == '*')
	{
		solution = num1 * num2;
	}
	else if (op == '/')
	{
		solution = num1 / num2;
	}

	//display the result
	std::cout << "The solution is: " << solution << std::endl;

	return 0;
}