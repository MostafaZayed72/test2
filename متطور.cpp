#include <iostream>
#include <string>
#include <array>
#include<cmath>
#include<algorithm>
#include <vector>

using namespace std;



int main()
{
	float number1, number2;
	string calc;
	cout << "===========================\n";
	cout << " ( Calculator Programe \n) ";
	cout << "===========================\n";
	cout << "enter number 1 \n";
	cin >> number1;
	cout << "enter number 2 \n";
	cin >> number2;
	cout << " enter calculation method ( + , - , * , /) \n";
	cin >> calc;

	if (calc == "+")
	{
		cout << "the result of " << number1 << " + " << number2 << " = " << number1 + number2;
}
	else if (calc == "-")
	{
		cout << "the result of " << number1 << " - " << number2 << " = " << number1 - number2;
	}
	else if (calc == "*")
	{
		cout << "the result of " << number1 << " * " << number2 << " = " << number1 * number2;
	}
	else if (calc == "/")
	{
		if (number1 == 0 || number2 == 0)
		{
			cout << " error , Choose a number other than 0 \n";
		}
		else {
			cout << "the result of " << number1 << " / " << number2 << " = " << number1 / number2;
		}

	}
	else
	{
		cout << " wrong choice";
	}



}

