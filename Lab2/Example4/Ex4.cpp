/*
* Using C++ random-number engine and distribution to rolla six-sided die
* True unpredictable randomness
* Ref 6.10
*/

#include <iostream>
#include <iomanip>
#include <random>
#include <ctime>


int main() {

	//use default random generation to produce uniformly distributed pseudorandom int values from 1 - 10

	std::default_random_engine engine{ static_cast<unsigned>(time(0)) };
	std::uniform_int_distribution<unsigned int> randomInt{ 1, 10 };

	for (unsigned int i{ 1}; i <= 10; i++) {

		std::cout << std::setw(10) << randomInt(engine);
		if (i % 5 == 0) {
			std::cout << "\n";
		}
	}

	return 0;
}