//Initializing Arrays
//Ref 7.3, 7.4, 7.5

#include <iostream>
#include <iomanip>
#include <array>
using namespace std;

int main() {

	array<int, 10> n = {32, 27, 64, 18, 95};

	for (unsigned int i{ 4 }; i < n.size(); i++) {
		n[i] = 2 + (2*i);
	}

	cout << "Element" << setw(10) << "Value" << endl;

	for (unsigned int i{ 0 }; i < n.size(); i++) {
		cout << setw(7) << i << setw(10) << n[i] << endl;
	}


	return 0;

}