//Ref 16.6
//Math algorithms in std library

#include <iostream>
#include <algorithm>
#include <numeric>
#include <array>
#include <iterator>
#include <random>

using namespace std;


int main() {

	const size_t SIZE = 10;
	array<int, SIZE> a1 = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	ostream_iterator<int> output = { cout, " " };

	cout << "a1 before random_shuffle";
	copy(a1.cbegin(), a1.cend(), output);

	default_random_engine randomEngine{ random_device{}() };

	shuffle(a1.begin(), a1.end(), randomEngine);
	cout << "\na1 after random_shuffle:";
	copy(a1.cbegin(), a1.cend(), output);


	array<int, SIZE> a2{ 100, 2, 8, 1, 50, 3, 8, 8, 9, 10 };
	cout << "\n\na2 contains: ";
	copy(a2.cbegin(), a2.cend(), output);

	int result = count(a2.cbegin(), a2.cend(), 8);

	cout << "\nNumber of elements match 8: " << result;

	result = count_if(a2.cbegin(), a2.cend(), [](auto i) {return i > 9; });
	cout << "\nNumber of elements greater than 9: " << result;
}
