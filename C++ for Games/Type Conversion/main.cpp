#include <iostream>

class Base
{
public:
	virtual ~Base() = default;
};

class Base2
{
public:
	virtual ~Base2() = default;
};

class Derived : public Base
{
public:
	 ~Derived() override = default;
};

class Derived2 : public Base
{
public:
	~Derived2() override = default;
};

int main()
{
	unsigned char c = 'A';
	int i = c; // Widening conversion.

	c = static_cast<unsigned char>(i); // Narrowing conversion.

	unsigned int ui = 3;
	i = static_cast<int>(ui);

	ui =static_cast<unsigned int> (i); // if negative we lose the - therefore results in unintentional behaviour.

	//float f = 3.14f;
	//double d = f; //wide
	//f = static_cast<float>(d); //narr

	//f = static_cast<float>(i);
	//d = i; 

	//// i = f; => this will truncate the decimal part
	//i = static_cast<int>(f);

	//// f = (float)i; => c-style | we avoid those 

	const float cf = 3.14f;
	float* pf = const_cast<float*>(&cf);
	*pf = 6.28f;

	//advanced stuff:

	/*Base* b = new Derived();

	Derived* d = new Derived();
	Derived2* d2 = dynamic_cast<Derived2*>(b);

	b = d;

	if (d != nullptr)
	{
		std::cout << "b is derived" << std::endl;
	}

	if (d2 == nullptr)
	{
		std::cout << "b is not derived2" << std::endl;
	}*/

	Base* b = new Base();
	Base2* b2 = reinterpret_cast<Base2*>(b);

	return 0;
}