//Justin Mckenna
//bigint class
//CS 23001

#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <iostream>
#include <fstream>

const int MAX_SIZE = 300;

class bigint {

public:

    bigint(); //set to zero
    bigint(int); //set to an int
    bigint(const char[]); //set to a char[]

    void debugPrint(std::ostream&) const; //print bigint for debugging
    friend bool operator==(const bigint&, const bigint&);
    friend bool operator==(const bigint&, int);
    friend std::ostream& operator<<(std::ostream&, const bigint&); //print bigint

    friend std::istream& operator>>(std::istream&, bigint&); //read bigint from input
    bigint operator+(const bigint&) const; //add two bigints
    friend bigint operator+(const bigint&, int); //add bigint to int
    int operator[](int) const; //find position in bigint

    bigint timesDigit(int) const;
    bigint times10(int) const;
    bigint operator*(const bigint&) const;
    friend bigint operator*(const bigint&, int);

private:

    int digit[MAX_SIZE]; //digits that make up bigint

};

#endif
