// Ref 16.4
//Algorithms remove, remove_if, remove_copy, remove_copy_if

#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>

using namespace std;



int main() {

	const size_t SIZE{ 10 };
	const array<int, SIZE> starterArray{ 10, 2, 4, 16, 6, 14, 8, 12, 10 };

	array<int, SIZE> a1(starterArray);
	ostream_iterator<int> output{ cout, " " };

	cout << "a1 before removing all 10s: \n";
	copy(a1.cbegin(), a1.cend(), output);
	auto newEnd = remove(a1.begin(), a1.end(), 10);
	cout << "\na1 after removing all 10s: \n";
	copy(a1.begin(), newEnd, output);

	array<int, SIZE> a2(starterArray);
	array<int, SIZE> c{ 0 };
	cout << "\n\na2 before removing all 10s and copying:\n";
	copy(a2.cbegin(), a2.cend(), output);

	remove_copy(a2.cbegin(), a2.cend(), c.begin(), 10);
	cout << "\n\na2 after removing all 10s and copying:\n";
	copy(c.cbegin(), c.cend(), output);


	array<int, SIZE> a4(starterArray);
	array<int, SIZE> c2{ 1 };
	cout << "\n\na4 before removing all elements greater than 9 and copying: \n";
	copy(a4.cbegin(), a4.cend(), output);
	remove_copy_if(a4.begin(), a4.end(), c2.begin(), [](auto i) {return i > 9; });
	cout << "\nc2 after removing all elements greater than 9 from a4:\n";
	copy(c2.cbegin(), c2.cend(), output);

}