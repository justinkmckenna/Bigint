//Justin Mckenna
//bigint
//CS 23001

//function definitions for bigint

#include "bigint.hpp"
#include <iostream>

//milestone 1------------------------------------------------------

//sets bigint to zero
bigint::bigint() {
    for (int i = 0; i < MAX_SIZE; i++) {
        digit[i] = 0;
    }
}

//sets bigint to a specific integer
bigint::bigint(int number) {
    //gets number of digits for integer
    int tmpNumber = number;
    int numDigits = 0;
    while (tmpNumber != 0) {
       tmpNumber = tmpNumber / 10;
	numDigits++;
    }

    //puts digits into bigint using numDigits
    int divisor;
    for (int i = 0; i < MAX_SIZE; i++) {

	//assigns initial number to bigint
        if (numDigits != 0) {
            divisor = 1;
	    for (int j = numDigits - 1; j > 0; j--) {
		divisor *= 10;
	    }
	    digit[--numDigits] = number / divisor;
	    number = number % divisor;
        } else {
	    //this will assign any trailing zeros to bigint
	    digit[i] = 0;
	}
    }
}

//sets bigint to a character array
bigint::bigint(const char ch[]) {
    //gets size of ch array
    int size = 0;
    for (int i = 1; ch[i] != '\0'; i++) {
	size++;
    }

    //puts ch array into bigint
    for (int i = 0; i < MAX_SIZE; i++) {
        if (i <= size) {
	    digit[i] = ch[size - i] - '0';
	} else {
	    digit[i] = 0;
	}
    }
}

//prints bigint, used for debugging
void bigint::debugPrint(std::ostream& out) const {
    for (int i = 0; i < MAX_SIZE; i++) {
	if (i < 50) {
	    out << digit[i] << '|';
	} else if (i == 50) { //new line
	    out << std::endl << digit[i] << '|';
	} else if (50 < i && i < 100) {
	    out << digit[i] << '|';
	} else if (i == 100) { //new line
	    out << std::endl << digit[i] << '|';
	} else if (150 < i && i < 200) {
	    out << digit[i] << '|';
	} else if (i == 200) { //new line
	    out << std::endl << digit[i] << '|';
	} else if (200 < i && i < 250) {
	    out << digit[i] << '|';
	} else if (i == 250) { //new line
	    out << std::endl << digit[i] << '|';
	} else {
	    out << digit[i] << '|';
	}
    }
    out << std::endl;
}

//checks if bigint is equal to a bigint (bigint == bigint)
bool operator==(const bigint& lhs, const bigint& rhs) {

    for (int i = 0; i < MAX_SIZE; i++) {
        if (lhs.digit[i] != rhs.digit[i]) {
            return false;
        }
    }
    return true;
}


//checks if bigint is equal to a number (bigint == int)
bool operator==(const bigint& lhs, int num) {

    bigint rhs(num);

    return lhs == rhs;
}

//allows for output of bigint (out << bigint)
std::ostream& operator<<(std::ostream& out, const bigint& bi) {

    bool numStarted = false; //used to locate 1st number
    int numDigits = 0; //used to start a new line when 50 is reached
    for (int i = MAX_SIZE - 1; i >= 0; i--) {
	//locates 1st number using numStarted
	if (bi.digit[i] != 0) {
	    numStarted = true;
	}

	//prints digits starting from 1st number
	if (numStarted == true) {
	    if (numDigits < 50) {
		out << bi.digit[i];
		numDigits++;
	    } else if (numDigits == 50) { //new line
		out << std::endl << bi.digit[i];
		numDigits++;
	    } else if (50 < numDigits && numDigits < 100) {
		out << bi.digit[i];
		numDigits++;
	    } else if (numDigits == 100) { //new line
		out << std::endl << bi.digit[i];
		numDigits++;
	    } else if (100 < numDigits && numDigits < 150) {
		out << bi.digit[i];
		numDigits++;
	    } else if (numDigits == 150) { //new line
		out << std::endl << bi.digit[i];
		numDigits++;
	    } else if (150 < numDigits && numDigits < 200) {
		out << bi.digit[i];
		numDigits++;
	    } else if (numDigits == 200) { //new line
		out << std::endl << bi.digit[i];
		numDigits++;
	    } else if (200 < numDigits && numDigits < 250) {
		out << bi.digit[i];
		numDigits++;
	    } else if (numDigits == 250) { //new line
		out << std::endl << bi.digit[i];
		numDigits++;
	    } else {
		out << bi.digit[i];
		numDigits++;
	    }
	}
    }

    //if number was never started print zero
    if (numStarted == false) {
	out << 0;
    }
    return out;
}

//Milestone 2---------------------------------------------------------

//reads a bigint from an input stream (in >> bigint)
std::istream& operator>>(std::istream& in, bigint& bi) {
    int numSize = 0; //size of number
    int numWhiteSpace = 0; //any whitespace between digits
    char tmpPos; //temporary position to get size

    //gets # of digits from number
    in.get(tmpPos);
    while(!in.eof() && tmpPos != ';') {
        if(tmpPos == ' ' || tmpPos == '\n' || tmpPos == '\t') numWhiteSpace++;
	else numSize++;
	in.get(tmpPos);
    }

    //resets istream to beginning of number to allow assignment
    for(int i = 0; i < numSize + numWhiteSpace + 1; i++) {
	in.unget();
    }

    //assign digits to char array from number, uses pos
    char charNumber[numSize];
    for(int i = numSize - 1; i >= 0; i--) {
	in >> charNumber[i];
    }

    //assigns digits from char number to bigint
    for(int i = 0; i < MAX_SIZE; i++) {
	if(i < numSize) {
	    bi.digit[i] = charNumber[i] - '0';
	} else {
	    bi.digit[i] = 0;
	}
    }
    in >> tmpPos; //points to next number in stream
    return in;
}

//returns digit based on index (bigint[i])
int bigint::operator[](int index) const {
    return digit[index];
}

//adds two bigints (bigint + bigint)
bigint bigint::operator+(const bigint& rhs) const {
    bigint result;
    int carry = 0; //deals with digits greater than 9

    for(int i = 0; i < MAX_SIZE; i++) {
	result.digit[i] = digit[i] + rhs.digit[i] + carry;
	if(result.digit[i] > 9) {
	    carry = 1;
	} else {
	    carry = 0;
	}
	result.digit[i] %= 10;
    }
    return result;
}

//adds a bigint to an int (bigint + int)
bigint operator+(const bigint& lhs, int rhs) {
    bigint bi(rhs);
    return lhs + bi;
}


//milestone 3-------------------------------------------------------------

//multiplies a bigint and a single digit
bigint bigint::timesDigit(int singleDigit) const {
    bigint result;
    int carry = 0;
    for(int i = 0; i < MAX_SIZE; i++) {
	result.digit[i] = (digit[i] * singleDigit) + carry;
	if(result.digit[i] > 9) {
	    carry = result.digit[i] / 10;
	} else {
	    carry = 0;
	}
	result.digit[i] %= 10;
    }
    return result;
}

//multiplies a bigint by 10^n to shift base 10
bigint bigint::times10(int power) const {
    bigint result;
    if(power == 0) return *this; //if shifting 0


    for(int i = MAX_SIZE - 1; i > 0; i--) { //does first shift using *this
	result.digit[i] = digit[i - 1];
    }
    --power;


    while(power > 0) { //continues shifting using result
	for(int i = MAX_SIZE - 1; i > 0; i--) {
            result.digit[i] = result.digit[i - 1];
        }
    	--power;
    }
    return result;
}

//multiplies 2 bigints (bigint * bigint)
bigint bigint::operator*(const bigint& rhs) const {
    bigint product;
    bigint temp;
    for(int i = 0; i < MAX_SIZE; i++) {
	//product = product + ((lhs * rhs[i]) * 10^i);
	temp = timesDigit(rhs.digit[i]);
	product = product + temp.times10(i);
    }
    return product;
}

//multiplies a bigint to an int (bigint * int)
bigint operator*(const bigint& lhs, int num) {
    bigint rhs(num);
    return lhs * rhs;
}
