// CppImplicitCasting.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <cstdint>
#include <iostream>

int main()
{
	uint16_t a = UINT16_MAX;
	int32_t b = 3;

	auto c = a + b;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;

	if (c > a)
		std::cout << "Everything is working as expected" << std::endl;
	else
		std::cout << "This is an unexpected result" << std::endl;


	getchar();
    return 0;
}

