/*
Patrick Langley
Quotient
5/1/2018
*/

#include <iostream>

using namespace std;

int main()
{
	double number1, number2, quotient;

	cout << "\nEnter the first number>";
	cin >> number1;
	cout << "\nEnter the second number>";
	cin >> number2;

	quotient = number1 / number2;

	cout << "\nThe quotient of " << number1 << " divided by " << number2 << " is " << quotient;

	cout << endl << endl;
	system("pause");
	return 0;
}