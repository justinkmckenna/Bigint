//==============================================================================
// Basics for openning a file for milestone 3 of Project 1.
//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in("data1-2.txt");    // Define stream for input
    if(!in) {                           // Make sure it opened correctly.
        std::cerr << "Could not open data1-2.txt, exiting." << std::endl;
        exit(1);
    }

    std::cout << "Gets bigints from file and multiplies them until end of file:"
	      << std::endl << std::endl;

    bigint lhs, rhs, result;
    while(!in.eof() && in >> lhs) {
	//getting bigints from input
	if(!in.eof()) in >> rhs;

	//prints bigints
	std::cout << "lhs = " << lhs << std::endl << std::endl
		  << "rhs = " << rhs << std::endl << std::endl;

	//adds bigints and print result
	result = lhs * rhs;
	std::cout << "result = " << result << std::endl << std::endl;
    }

    in.close();
    return 0;
}
