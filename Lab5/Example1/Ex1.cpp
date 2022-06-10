//Objective: Output to a file

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	//Working with file stream
	//1. Create our file stream object
	//2. Open the file stream
	//3. Use the file stream
	//4. Close the file stream

	//File Stream Objects
	//fstream - output and input
	//ofstream - output. writing out to a file
	//ifstream - input. reading from file

	//Step #1
	ofstream outputFile;
	string name;

	//Step #2
	outputFile.open("Friends.txt"); //make sure to include extension for file 

	//Step #3
	cout << "Enter the name of 3 friends.\n";

	for (int i = 1; i <= 3; i++) {
		cout << "Friend #" << i  << ": ";
		cin >> name;
		outputFile << name << endl;
	}

	//Step #4
	outputFile.close();

	cout << "The names were saved to a file.";

	return 0;
}