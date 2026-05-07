#include <iostream>
#include <cstdint>
#include <bitset>


int main()
{
	int8_t a = 0b01010101;
	int8_t b = 0b11111111;
	int8_t c = 0b10000000; //if its sign bit is one, the incoming bits on the left side will be ones.
	uint8_t mask = 0b111;

	std::cout << "~a: " << std::bitset<8>(~a) << std::endl;
	std::cout << "b: " << std::bitset<8>(b) << std::endl;
	std::cout << "a & b: " << std::bitset<8>(a & b) << std::endl;
	std::cout << "a & ~a: " << std::bitset<8>(a & ~a) << std::endl;
	std::cout << "a | b: " << std::bitset<8>(a | b) << std::endl;
	std::cout << "a | ~a: " << std::bitset<8>(a | ~a) << std::endl;
	std::cout << "a ^ b: " << std::bitset<8>(a ^ b) << std::endl;
	std::cout << "a << 1: " << std::bitset<8>(a << 1) << std::endl;
	std::cout << "a << 8: " << std::bitset<8>(a << 8) << std::endl;
	std::cout << "a >> 6: " << std::bitset<8>(a >> 6) << std::endl;
	std::cout << "c >> 6: " << std::bitset<8>(c >> 6) << std::endl;
	std::cout << "a & mask: " << std::bitset<8>(a & mask) << std::endl;
	std::cout << "a & 1: " << std::bitset<8>(a & 1) << std::endl; //by masking with the value 1, we can see if the number is even or odd by the last bit (0 = even, 1 = odd)



	return 0;
}