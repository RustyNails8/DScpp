#include <iostream>

int main() {
	std::cout << "Enter two numbers \n"; //Line 1
	int num1, num2, max;
	// scanf("%d", &num1);
	// scanf("%d", &num2);
	std::cin >> num1 >> num2 ;
	if (num1 >= num2) //Line 3
		max = num1; //Line 4
	else //Line 5
		max = num2; //Line 6
	std::cout << "The maximum number is: " << max << std::endl; //Line 7
	
}
