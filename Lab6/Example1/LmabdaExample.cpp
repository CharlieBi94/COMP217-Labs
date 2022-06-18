//Ref 16.1
//Lambda Expressions

#include <iostream>
#include <array>
#include <algorithm>
#include <iterator>
using namespace std;


int main() {

	const size_t SIZE{ 4 }; //size of array
	array<int, SIZE> values{ 1, 2, 3, 4 };
	ostream_iterator<int> output{ cout, " " };

	cout << "values contains: ";
	copy(values.cbegin(), values.cend(), output);
	cout << "\nDisplay each element multiplied by 2: ";

	//output each element multiplied by two
	for_each(values.cbegin(), values.cend(), [](auto i) {cout << i * 2 << " "; });

	//add all elements of array
	int sum = 0;
	for_each(values.cbegin(), values.cend(), [&sum](auto i) {sum += i; });

	cout << "\nSum of value's elements is " << sum << endl; //output sum

}