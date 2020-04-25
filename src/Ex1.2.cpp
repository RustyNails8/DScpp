#include <iostream>
#include <ostream>
using namespace std ;

int main() {
	std::cout << "\nEnter Positive intergers ending with -1 : \n" << std::endl;
	int count sum num ;
	count = 0;
	sum = 0;

	cin >> num ;

	while (num != -1)
	{
		sum = sum + num ;
		count++ ;
		cin >> num ;
	}

	cout << "\nThe sum of numbers is :  " << sum << std::endl;

	int average ;
	if (count != 0)
		average = sum / count ;
	else
		average = 0 ;

	cout << "\nThe avarage is : " << average << std::endl;


}