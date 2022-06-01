/*
* Example of a Prototype function
* Ref. 6.3
*/

#include <iostream>
#include <iomanip>
using namespace std;


//function prototype:
int maximum(int x, int y, int z);

int main() {

	cout << "Enter three integer values: ";
	int int1, int2, int3;
	cin >> int1 >> int2 >> int3;

	cout << "The maximum integer value is: " << maximum(int1, int2, int3) << endl;

	return 0;
}

int maximum(int x, int y, int z) {

	int maxValue{ x };

	if (y > maxValue) {
		maxValue = y;
	}

	if (z > maxValue) {
		maxValue = z;
	}

	return maxValue;
}


