//Ref 16.2
//4 Algorithms examples: fill, fill_n, generate and generate_n

#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>
using namespace std;

//generator function defined as an example
char nextLetter() {
	static char letter{ 'A' };
	return letter++;
}

int main() {
	array<char, 10> chars;

	cout << "chars after fillinng with 5s:\n";
	fill(chars.begin(), chars.end(), '5');
	
	ostream_iterator<char> output{ cout, " " };
	copy(chars.begin(), chars.end(), output);

	cout << "\nFilling 5 elements of chars array with A: \n";
	//fill first five elements of char array with the letter A
	fill_n(chars.begin(), 5, 'A');

	copy(chars.begin(), chars.end(), output);


	cout << "\n\nchars after generating letters A-J:\n";
	//generate values for all elements of char with nextLetter
	generate(chars.begin(), chars.end(), nextLetter);
	copy(chars.begin(), chars.end(), output);


	cout << "\n\nchars after generating letters K-O for the first 5 elements:\n";
	//generate next 5 values for char array
	generate_n(chars.begin(),5, nextLetter);
	copy(chars.begin(), chars.end(), output);
	cout << endl;

	//generate with lambda instead
	generate_n(chars.begin(), 3, []() { static char letter{ 'A' }; return letter++; });

	cout << "\nchars after using a lambda to generate A-C for the first 3 elements: \n";
	copy(chars.begin(), chars.end(), output);
	cout << endl;
}