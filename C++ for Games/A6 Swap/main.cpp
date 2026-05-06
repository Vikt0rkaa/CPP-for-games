#include <iostream>

void swap1(int* a, int* b)
{
	int temp = *a; //stores value of a
	*a = *b; //assigns b to a
	*b = temp; //assigns temp to b

}

//modifying to use ref instead of p
void swap2(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 3, b = 5;

	std::cout << "<<Pointers>>" << std::endl;
	std::cout << "Before swap: a = " << a << ", and b = " << b << "." << std::endl;

	swap1(&a, &b);

	std::cout << "After swap: a = " << a << ", and b = " << b << "." << std::endl;


	a = 3, b = 5;

	std::cout << "<<References>>" << std::endl;
	std::cout << "Before swap: a = " << a << ", and b = " << b << "." << std::endl;

	swap2(a, b);

	std::cout << "After swap: a = " << a << ", and b = " << b << "." << std::endl;

	return 0;
}



