#include <iostream>

struct Nec {
	const int& r;
};

int foo()
{
	return 1;
}
int main()
{
	Nec n{ foo() }; //Valid. life extension

	Nec m( foo() ); // Ignore most mexing parse. There isn't life extension
}
