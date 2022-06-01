//Searching and Sorting Arrays
//Ref 7.15


#include <iostream>
#include <iomanip>
#include <array>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	array<string, 7> colours{ "red", "orange", "yellow", "green", "blue", "indigo", "violet" };

	//output original array
	cout << "Unsorted array:\n";
	for (string c : colours) {

		cout << c << " ";
	}

	sort(colours.begin(), colours.end());


	//output sorted array
	cout << "\nSorted array:\n";
	for (string c : colours) {
		cout << c << " ";
	}

	//search for "indigo" in colours
	bool foundIndigo = binary_search(colours.begin(), colours.end(), "indigo");
	cout << "\n\n\"indigo\"" << (foundIndigo ? " was" : " was not") << " found in colours." << endl;

	//search for "cyan" in colours
	bool foundCyan = binary_search(colours.begin(), colours.end(), "cyan");
	cout << "\n\n\"cyan\"" << (foundCyan ? " was" : " was not") << " found in colours." << endl;


	return 0;
}