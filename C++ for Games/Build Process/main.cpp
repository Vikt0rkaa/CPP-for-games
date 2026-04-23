#include "Config.hpp"
#include "Game.hpp"

#include <iostream>

int main()
{
	Update();

	std::cout << "JumpHeight: " << JumpHeight << std::endl;
	std::cout << "JumpDuration: " << JumpDuration << std::endl;

	return 0;
}