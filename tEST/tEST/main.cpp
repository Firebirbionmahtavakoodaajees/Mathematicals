#include "main.h"
#include <iostream>
#include <vector>
#include <string>
#include <cmath>


int main() {

	//is the operation +,-,*, ^,s or /
	char op;
	float num1;
	double num2;
	double result;

	//Program Header
	std::cout << "*********************** Calculator ***********************\n (if your answer is -919209, this will not work..) \n";

	//Ask for the operator
	std::cout << "Enter the operator: +,-,*, ^,s or /: ";
	std::cin >> op;

	//ask for the numbers
	//num1
	std::cout << "Enter the num1: ";
	std::cin >> num1;

	//num2
	std::cout << "Enter the num2: ";
	std::cin >> num2;


	//now calculate the result
	switch (op) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 * num2;
		break;
	case 's':
		result = pow(num1, (1 / num2));
		break;
	case '^':
		result = pow(num1, num2);
		break;
	default:
		std::cout << "Nigers trynna be smurt\n\n";
		result = -919209;
		break;

	}

	if (result == -919209) {
		std::cout << "neva trynna be smurtten";
	}
	else {
		std::cout << "You result is: " << result;
	}
	




	//Program ender
	std::cout << "\n*********************** Calculator ***********************";
	//Returning without errors
	return 0;
}