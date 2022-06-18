#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>
using namespace std;


void static PrintArray( array<int, 10> &array) {

	ostream_iterator<int> output{ cout, " " };
	cout << endl;
	copy(array.cbegin(), array.cend(), output);
	cout << endl;
}


int main() {
	const size_t SIZE = 10;
	array<int, SIZE> a1{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	array<int, SIZE> a2(a1); //COPIES a1 to a2
	array<int, SIZE> a3{ 1, 2, 3, 4, 1000, 6, 7, 8, 9, 10 };

	cout << "a1 contains:";
	PrintArray(a1);
	cout << "a2 contains:";
	PrintArray(a2);
	cout << "a3 contains:";
	PrintArray(a3);

	bool result = equal(a1.cbegin(), a1.cend(), a2.cbegin(), a2.cend());
	cout << "\n\na1 " << (result ? "is" : "is not") << " equal to a2\n";

	result = equal(a1.cbegin(), a1.cend(), a3.cbegin(), a3.cend());
	cout << "\n\na1 " << (result ? "is" : "is not") << " equal to a3\n";

	//check for mismatch between a1 and a3
	auto location = mismatch(a1.begin(), a1.end(), a3.cbegin(), a3.cend());
	cout << "\nThere is a mismatch between a1 and a3 at location "
		<< (location.first - a1.begin()) << " where a1 contains "
		<< *location.first << " and a3 contains " << *location.second << endl << endl;

	char c1[SIZE] = "ZZZZZZ";
	char c2[SIZE] = "BYE BYE";

	//perform lexicographical comparison of c1 and c2
	result = lexicographical_compare(cbegin(c1), cend(c1), cbegin(c2), cend(c2));
	cout << c1 << (result ? " is less than " : " is greater than or equal to ") << c2 << endl;

}

