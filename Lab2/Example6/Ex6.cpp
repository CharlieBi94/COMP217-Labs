//Recursive function example
//Ref 6.25

#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned long);
unsigned long fibonacci(unsigned long);

int main() {

	/*for (unsigned int i{ 0 }; i <= 10; i++) {
		cout << setw(2) << i << "! = " << factorial(i) << endl;
	}*/

	for (unsigned int i{ 0 }; i <= 10; i++) {
		cout << "Fibonacci(" << i << ") = " << fibonacci(i) << endl;
	}

	cout << "\nfibonacci(20) = " << fibonacci(20) << endl;
	cout << "fibonacci(30) = " << fibonacci(30) << endl;
	cout << "fibonacci(25) = " << fibonacci(35) << endl;
}

unsigned long factorial(unsigned long number) {

	if (number <= 1) {
		return 1;
	}
	else {
		return number * factorial(number - 1);
	}
}

unsigned long fibonacci(unsigned long number) {
	if ((0 == number) || (1 == number)) {
		return number;
	}
	else {
		return fibonacci(number - 1) + fibonacci(number - 2);
	}
}

