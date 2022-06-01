//Passing arguments by value and by reference
//Ref 6.17

#include <iostream>
using namespace std;

int squareByValue(int);
void squareByReference(int&);

int main() {

	int x{ 2 },
		z{ 4 };

	cout << "x = " << x << " before squareByValue"<<endl;
	cout << "Value returned by squareByValue: " << squareByValue(x) << endl;

	cout << "x = " << x << " after squareByValue" << endl;

	//demonstrate squareByReference
	cout << "z = " << z << " before squareByReference.\n";
	squareByReference(z);
	cout << "z = " << z << " after squareByReference.\n";


	return 0;
}

int squareByValue(int number) {

	return number *= number;
}

void squareByReference(int& numberRef) {

	numberRef *= numberRef;
}
