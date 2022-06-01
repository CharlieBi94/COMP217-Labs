/*
* Testing the use of rand in std C library
* Ref 6.7
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>


int main() {

	/*for (unsigned int i{ 1 }; i <= 20; i++) {

		cout << setw(10) << (1 + rand() % 10);

		if (i % 5 == 0) {

			cout << endl;
		}
	}*/

	unsigned int
		frequency1{ 0 },
		frequency2{ 0 },
		frequency3{ 0 },
		frequency4{ 0 },
		frequency5{ 0 },
		frequency6{ 0 };

	int face{ 0 };

	srand(static_cast<unsigned int>(time(0)));


	for (unsigned int i{ 1 }; i <= 60'000'000; i++) {
		face = 1 + rand() % 6;
		switch (face) {

		case 1:
			frequency1++;
			break;

		case 2:
			frequency2++;
			break;

		case 3:
			frequency3++;
			break;

		case 4:
			frequency4++;
			break;

		case 5:
			frequency5++;
			break;

		case 6:
			frequency6++;
			break;

		default:
			std::cout << "Invalid value detected!";

		}
	}

	std::cout << "Face" << std::setw(13) << "Frequency" << std::endl; //table headings

	std::cout << "   1" << std::setw(13) << frequency1
		<< "\n   2" << std::setw(13) << frequency2
		<< "\n   3" << std::setw(13) << frequency3
		<< "\n   4" << std::setw(13) << frequency4
		<< "\n   5" << std::setw(13) << frequency5
		<< "\n   6" << std::setw(13) << frequency6 << std::endl;


	return 0;
}