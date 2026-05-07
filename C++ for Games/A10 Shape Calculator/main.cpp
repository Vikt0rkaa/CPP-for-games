#include <iostream>
#include <string>
#include <limits>
#include <cmath>

int main()
{
	char choice;
	std::string input;
	const float PI = 3.141592653f;

	//prompting the user
	while(true)
	{
		std::cout << "<<Select the shape>>" << std::endl;
		std::cout << "<<1 or C for Circle>>" << std::endl;
		std::cout << "<<2 or S for Square>>" << std::endl;
		std::cout << "<<3 or R for Rectangle>>" << std::endl;
		std::cout << "<<4 or T for Triangle>>" << std::endl;
		std::cout << "Enter your choice: " << std::endl;
		std::cin >> input;

		if (input == "1" || input == "C")
		{
			choice = 'C';
			break;
		}
		else if (input == "2" || input == "S")
		{
			choice = 'S';
			break;
		}
		else if (input == "3" || input == "R")
		{
			choice = 'R';
			break;
		}
		else if (input == "4" || input == "T")
		{
			choice = 'T';
			break;
		}
		else
		{
			std::cerr << "ERROR: Please try again." << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}

	switch (choice)
	{
	case'C': 
	{
		float r;
		std::cout << "Enter the radius: " << std::endl;
		std::cin >> r;

		while (std::cin.fail() || r <= 0)
		{
			std::cerr << "ERROR: Please enter a positive number: " << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin >> r;
		}

		std::cout << "Circumference: " << 2 * PI * r << std::endl;
		std::cout << "Area: " << PI * r * r << std::endl;
		break;
	}
	case'S':
	{
		float s;
		std::cout << "Enter the length of the side: " << std::endl;
		std::cin >> s;

		while (std::cin.fail() || s <= 0)
		{
			std::cerr << "ERROR: Please enter a positive number: " << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin >> s;
		}

		std::cout << "Perimeter: " << 4 * s << std::endl;
		std::cout << "Area: " << s * s << std::endl;
		break;
	}
	case'R':
	{
		float w, h;
		std::cout << "Enter the width: " << std::endl;
		std::cin >> w;

		while (std::cin.fail() || w <= 0)
		{
			std::cerr << "ERROR: Please enter a positive number: " << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin >> w;
		}

		std::cout << "Enter the height: " << std::endl;
		std::cin >> h;

		while (std::cin.fail() || h <= 0)
		{
			std::cerr << "ERROR: Please enter a positive number: " << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin >> h;
		}


		std::cout << "Perimeter: " << 2 * (w + h) << std::endl;
		std::cout << "Area: " << w * h << std::endl;
		break;
	}
	case'T':
	{
		float b, h;
		std::cout << "Enter the base: " << std::endl;
		std::cin >> b;

		while (std::cin.fail() || b <= 0)
		{
			std::cerr << "ERROR: Please enter a positive number: " << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin >> b;
		}

		std::cout << "Enter the height: " << std::endl;
		std::cin >> h;

		while (std::cin.fail() || h <= 0)
		{
			std::cerr << "ERROR: Please enter a positive number: " << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin >> h;
		}

		float hypotenuse = std::sqrt(b * b + h * h);

		std::cout << "Perimeter: " << b + h + hypotenuse << std::endl;
		std::cout << "Area: " << (b * h) / 2 << std::endl;
		break;
	}
	default:
		std::cerr << "ERROR: Invalid selection." << std::endl;
		break;
	}
}