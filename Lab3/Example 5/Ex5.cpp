//Multidimensional arrays
//Ref 7.17


#include <iostream>
#include <array>

using namespace std;

const size_t rows{ 3 };
const size_t columns{ 4 };

void printArray(const array<array<int, columns>, rows>&);

int main() {

	array<array<int, columns>, rows> array1{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	array<array<int, columns>, rows> array2{ 1, 2, 3, 4, 5};

	cout << "Values in array1 by row are:" << endl;
	printArray(array1);

	cout << "Values in array2 by row are:" << endl;
	printArray(array2);

	cout << array1[0][1];

	return 0;
}


void printArray(const array<array<int, columns>, rows>& a1) {

	for (auto const& row : a1) {

		for (auto const& element : row) {
			cout << element << ' ';
		}

		cout << endl;
	}

}