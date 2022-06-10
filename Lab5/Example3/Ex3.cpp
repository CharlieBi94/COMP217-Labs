#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	//1. Create the file stream object

	fstream inOutFile;
	string word;

	//2. Open filestream object
	inOutFile.open("inOut.txt");

	//2a. Check filestream object is open
	if (!inOutFile) {
		//file not found or opened correctly
		cout << "The file was not found." << endl;
		return 1;
	}

	//3. Use the file stream object
	while (inOutFile >> word) {
		cout << word << endl;
		
	}

	//EOF flag is set. Must clear the flag before performing other operations
	inOutFile.clear();

	inOutFile << "Charlie" << endl;

	//4. Close the file stream obj
	inOutFile.close();



	return 0;
}