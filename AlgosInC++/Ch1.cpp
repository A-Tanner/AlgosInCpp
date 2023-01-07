#include <iostream>
#include <stdio.h>

/**
PROTOTYPE DECLARATIONS
**/
int Ch1P1(int x, int y);
int Ch1P2(int x, int y);
int Ch1P3(int x, int y);

/**
UTILITY FUNCTIONS
**/

void EuclideanPrompt(int problem) {
	int x, y;

	std::cout << "Enter Numerator\n";
	std::cin >> x;
	std::cout << "Enter Denominator\n";
	std::cin >> y;

	std::cout << "The GCD of " << x << " and " << y << " is ";

	switch (problem) {
	case 1:
		std::cout << Ch1P1(x, y);
		break;
	case 2:
		std::cout << Ch1P2(x, y);
		break;
	case 3:
		std::cout << Ch1P3(x, y);
		break;
	}

	std::cout << "\n\n";
}
/**
PROBLEM 1
**/

int Gcd(int u, int v) {
	while (u > 0) {

		if (u < v) { //Swap values of u and v
			int temp = u;
			u = v;
			v = temp;
		}

		u = u - v;
	}

	return v;
}

int Ch1P1(int x, int y) {
	return Gcd(x, y);
}

/**
PROBLEM 2
**/

int ModGcd(int u, int v) {
	while (u > 0) {

		if (u < v) { //Swap values of u and v
			int temp = u;
			u = v;
			v = temp;
		}

		u = u % v;
	}

	return v;
}

int Ch1P2(int x, int y) {
	return ModGcd(x, y);
}
/**
PROBLEM 3
**/
struct fraction { int numerator; int denominator; };

int StructGcd(fraction fraction) {
	while (fraction.numerator > 0) {

		if (fraction.numerator < fraction.denominator) { //Swap values of u and v
			int temp = fraction.numerator;
			fraction.numerator = fraction.denominator;
			fraction.denominator = temp;
		}

		fraction.numerator = fraction.denominator % fraction.numerator;
	}

	return fraction.denominator;
}

int Ch1P3(int x, int y) {


	fraction f = { x,y };
	return StructGcd(f);
}
/**
PROBLEM 4
**/

int AddDigit(int existing, int incoming) {
	existing *= 10;
	existing += incoming;
	return existing;
}

int EnterDigit() {
	int digit = 10;
	while (digit < 10) {
		std::cout << "Enter a digit from 0-9 to have it appended the number, or -1 to conclude your number\n";
		std::cin >> digit;
		if (digit < -1 || digit > 9) {
			digit = 10;
		}
	}
	return digit;
}

void Ch1P4() {
	int finalNumber = EnterDigit();
	int currentNumber = finalNumber;

	while (currentNumber != -1) {
		currentNumber = EnterDigit();
		std::cout << "Your number so far is : " << finalNumber <<"\n";
		if (currentNumber == -1) { return; }
		else {
			AddDigit(finalNumber, currentNumber);
		}
	}

	return;

}

void Ch1() {
	std::cout << "Problem menu:\n";
	std::cout << "1. Implement the classical Euclids Algorithm\n";
	std::cout << "2. Implement the algorithm with modulus\n";
	std::cout << "3. Create an implementation that uses the following struct: fraction { int numerator; int denominator;)\n";
	std::cout << "4. Write a method that reads a number one digit at a time, then displays the final digit\n";
	std::cout << "5. Write a method that prints the bianry equivalent of a decimal number\n";
	std::cout << "6. Add logging to the euclidian algorithm\n";
	std::cout << "8. Write a program to find the gcd between three numbers\n";
	std::cout << "9. Find the largest pair of numbers that may be represented as integers whose gcd is 1\n";

	int choice = -1;
	while (choice == -1) {
		std::cin >> choice;
		switch (choice) {
		case 1:case 2: case 3: 
			EuclideanPrompt(choice);
			break;
		case 4:
			Ch1P4();
			break;
		default:
			std::cout << "Enter a valid option\n";
			choice = -1;
			break;
		}
	}

	return;
}
