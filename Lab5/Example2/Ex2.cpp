
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	ifstream inputFile;
	string name;

	inputFile.open("Friends.txt");
	
	//check if file opened correctly
	if (inputFile) {
		cout << "Here are the names stored in the Friends.txt file.\n";

		getline(inputFile, name); //tries to read in case file is empty

		while (!inputFile.fail()) {

			cout << name << endl;
			//reads text up to a '\n' character
			getline(inputFile, name); //1st param is where we are reading from, 2nd is where we are saving it to, 3rd is deliminating character
			
		}
	}
	else {
		cout << "Cannot open file provided.";
	}

	inputFile.close();


	return 0;
}