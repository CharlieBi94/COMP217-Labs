//Demo stream object error testing (testing flag
//Output modes
#include <iostream>
#include <fstream>

using namespace std;

void showState(fstream&);


int main() {
	//1. Create the filestream object
	//2. Open the filestream object

	fstream testFile("stuff.dat",ios::out);
	//test if file is open
	if (testFile.fail()) { //"Fail" flag that is set if you fail to open the file properly

		cout << "Cannot open file.\n";
		return 1;
	}

	//The file opened successfully
	int num = 10;
	cout << "Writing to the file. \n";
	testFile << num;
	showState(testFile);
	testFile.close();

	// Open the same file in input mode
	testFile.open("stuff.dat", ios::in);
	if (testFile.fail()) {

		cout << "Cannot open file.\n";

		return 1;
	}
	//Read the file
	cout << "\nReading the file.\n";
	testFile >> num;
	showState(testFile);


	//Attempting an invalid read
	cout << "\nForcing a bad read operation.\n";
	testFile >> num;
	showState(testFile);

	testFile.close();

	return 0;
	
}

void showState(fstream& file) {
	cout << "File Status: \n";

	cout << "EOF bit: " << file.eof() << endl; //End of file bit
	cout << "fail bit: " << file.fail() << endl; //Fail bit - illegal modification
	cout << "bad bit: " << file.bad() << endl; // Bad bit - serious catastrophic failure
	cout << "good bit: " << file.good() << endl; //Good bit - will be 1 unless above flags are true
	file.clear();
}