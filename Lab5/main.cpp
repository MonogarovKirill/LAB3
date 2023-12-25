
#include<iostream>
#include<cmath>

import Math;
using namespace Math;

int main()
{
	setlocale(LC_ALL, "Rus");
	
	std::cout << "¬ведите переменную";
	int u;
	std::cin >> u;

	Complex complex = f((Complex)u);
	Rational rational = f((Rational)u);
	double Double = f(u);
	std::cout << complex << std::endl;
	std::cout << rational<< std::endl;
	std::cout << Double<< std::endl;
	return 0;



}