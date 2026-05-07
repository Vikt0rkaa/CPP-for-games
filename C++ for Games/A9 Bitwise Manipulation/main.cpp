#include <iostream>
#include <cstdint>
#include <bitset>
#include <limits>


int main()
{
	//the storing of the number in uint8_t
	int input;
	uint8_t num;
	int bit;

	//getting the number
	std::cout << "Enter a number from 0 to 255: " << std::endl;
	std::cin >> input;

	while (std::cin.fail() || input < 0 || input > 255)
	{
		std::cerr << "ERROR: Please enter a valid number from 0 to 255." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> input;
	}

	num = static_cast<uint8_t>(input);

	//getting the bit position
	std::cout << "Enter a bit position from 0 to 7: " << std::endl;
	std::cin >> bit;

	while (std::cin.fail() || bit < 0 || bit > 7)
	{
		std::cerr << "ERROR: Please enter a valid number from 0 to 7." << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> bit;
	}

	//displaying the number in binary
	std::cout << "Your number in binary is: " << std::bitset<8>(num) << std::endl;

	//counting how many bits we have
	int count = 0;

	for (int i = 0; i < 8; ++i)
	{
		if (num & (1 << i))
		{
			count++;
		}
	}

	//displaying the number of bits
	std::cout << "The number of bits is: " << count << std::endl;

	//checking the nth bit if its set 
	int nbit;
	nbit = ((num >> bit) & 1);

	if (nbit == 1)
	{
		std::cout << "Bit " << bit << " is set to: true" << std::endl;
	}
	if (nbit == 0)
	{
		std::cout << "Bit " << bit << " is set to: false" << std::endl;
	}

	//making a mask
	uint8_t mask = (1 << bit);

	//setting the nth bit
	uint8_t setNum = num | mask;
	std::cout << "<<After setting bit " << bit << ">>" << std::endl;
	std::cout << "Binary: " << std::bitset<8>(setNum) << std::endl;
	std::cout << "Decimal: " << static_cast<int>(setNum) << std::endl;

	//clearing the nth bit
	uint8_t clearNum = num & ~mask;
	std::cout << "<<After clearing bit " << bit << ">>" << std::endl;
	std::cout << "Binary: " << std::bitset<8>(clearNum) << std::endl;
	std::cout << "Decimal: " << static_cast<int>(clearNum) << std::endl;

	//inverting the nth bit
	uint8_t invNum = num ^ mask;
	std::cout << "<<After inverting bit " << bit << ">>" << std::endl;
	std::cout << "Binary: " << std::bitset<8>(invNum) << std::endl;
	std::cout << "Decimal: " << static_cast<int>(invNum) << std::endl;

	//left shift value by n bits
	uint8_t leftNum = num << bit;
	std::cout << "<<After left shifting by " << bit << " bits>>" << std::endl;
	std::cout << "Binary: " << std::bitset<8>(leftNum) << std::endl;
	std::cout << "Decimal: " << static_cast<int>(leftNum) << std::endl;

	//right shift value by n bits
	uint8_t rightNum = num >> bit;
	std::cout << "<<After right shifting by " << bit << " bits>>" << std::endl;
	std::cout << "Binary: " << std::bitset<8>(rightNum) << std::endl;
	std::cout << "Decimal: " << static_cast<int>(rightNum) << std::endl;

	return 0;
}