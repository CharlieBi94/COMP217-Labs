//Binary File
#include <iostream>
#include <fstream>

using namespace std;

int main() {


	fstream file("anything.wewant", ios::out | ios::binary); //for sharing between applications (its faster to share binary)

	if (!file) {

		cout << "Error creating file.";
		return 1;
	}

	//Integer data to write to the binary file

	int buffer[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int size = sizeof(buffer) / sizeof(buffer[0]); //determines the number of elements in array

	cout << "Now writing data to the file.\n";
	file.write(reinterpret_cast<char*>(buffer), sizeof(buffer));//need two param; 1st character array, 2nd how much memory (size of array)
	file.close();

	//read from binary file

	file.open("anything.wewant", ios::in | ios::binary);

	if (!file) {

		cout << "Error creating file.";
		return 1;
	}

	cout << "Reading back the data." << endl;
	file.read(reinterpret_cast<char*>(buffer), sizeof(buffer));

	//Write out the array
	for (int i = 0; i < size; i++) {
		cout << buffer[i] << " ";
	}

	file.close();

	return 0;

}