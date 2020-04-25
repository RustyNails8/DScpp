#include <iostream>
#include <ostream>

int main() {
	std::cout << "  Enter two numbers  : \n" ;
	int num1 num2 max ;
	std::cin >> num1 >> num2 ;

	if (num1 >= num2)
		max = num1 ;
	else
		max = num2 ;

	std::cout << "\n  The maximum number is:  " << max << std::endl;

}