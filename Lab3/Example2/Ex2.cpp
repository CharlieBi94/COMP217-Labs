//Computing Arrays
//Ref 7.6


#include <iostream>
#include <array>
using namespace std;

int main() {

	const int arraySize{ 5 };
	array<int, arraySize> a1{ 10, 20, 30, 40 };
	int total{ 0 };

	//sum array

	for (int i{ 0 }; i < a1.size(); i++) {
		total += a1[i];
	}

	cout << "Total of array elements: " << total << endl;

	return 0;
}