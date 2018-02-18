// bigint Test Program
//
// Tests:  subscript, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {

    {
     // Setup 1-------------------------------------------------
     bigint bi(4);

     // Test
     int digit0 = bi[0];

     // Verify
     assert(bi == 4);
     assert(digit0 == 4);

     std::cout << "bi: " << bi << std::endl
	       << "digit0: " << digit0 << std::endl << std::endl;
    }
    {
     // Setup 2--------------------------------------------------
     bigint bi(27);

     // Test
     int digit0 = bi[0];
     int digit1= bi[1];

     // Verify
     assert(bi == 27);
     assert(digit0 == 7);
     assert(digit1 == 2);

     std::cout << "bi: " << bi << std::endl
	       << "digit0: " << digit0 << std::endl
	       << "digit1: " << digit1 << std::endl <<std::endl;
    }
    {
     // Setup 3-------------------------------------------------
     bigint bi(86);

     // Test
     int digit0 = bi[0];
     int digit1 = bi[1];

     // Verify
     assert(bi == 86);
     assert(digit0 == 6);
     assert(digit1 == 8);

     std::cout << "bi: " << bi << std::endl
               << "digit0: " << digit0 << std::endl
               << "digit1: " << digit1 << std::endl << std::endl;
    }
    {
     // Setup 4-------------------------------------------------
     bigint bi(294);

     // Test
     int digit0 = bi[0];
     int digit1 = bi[1];
     int digit2 = bi[2];

     // Verify
     assert(bi == 294);
     assert(digit0 == 4);
     assert(digit1 == 9);
     assert(digit2 == 2);

     std::cout << "bi: " << bi << std::endl
               << "digit0: " << digit0 << std::endl
               << "digit1: " << digit1 << std::endl
	       << "digit2: " << digit2 << std::endl << std::endl;
    }
    {
     // Setup 5--------------------------------------------------
     bigint bi(1130);

     // Test
     int digit0 = bi[0];
     int digit1 = bi[1];
     int digit2 = bi[2];
     int digit3 = bi[3];

     // Verify
     assert(bi == 1130);
     assert(digit0 == 0);
     assert(digit1 == 3);
     assert(digit2 == 1);
     assert(digit3 == 1);

     std::cout << "bi: " << bi << std::endl
               << "digit0: " << digit0 << std::endl
               << "digit1: " << digit1 << std::endl
               << "digit2: " << digit2 << std::endl
	       << "digit3: " << digit3 << std::endl << std::endl;
    }
    {
     // Setup 6--------------------------------------------------
     bigint bi(10001);

     // Test
     int digit0 = bi[0];
     int digit1 = bi[1];
     int digit2 = bi[2];
     int digit3 = bi[3];
     int digit4 = bi[4];

     // Verify
     assert(bi == 10001);
     assert(digit0 == 1);
     assert(digit1 == 0);
     assert(digit2 == 0);
     assert(digit3 == 0);
     assert(digit4 == 1);

     std::cout << "bi: " << bi << std::endl
               << "digit0: " << digit0 << std::endl
               << "digit1: " << digit1 << std::endl
               << "digit2: " << digit2 << std::endl
               << "digit3: " << digit3 << std::endl
	       << "digit4: " << digit4 << std::endl << std::endl;
    }
    {
     // Setup 7----------------------------------------------
     bigint bi(29578383);

     // Test
     int digit0 = bi[0];
     int digit1 = bi[1];
     int digit2 = bi[2];
     int digit3 = bi[3];
     int digit4 = bi[4];
     int digit5 = bi[5];
     int digit6 = bi[6];
     int digit7 = bi[7];

     // Verify
     assert(bi == 29578383);
     assert(digit0 == 3);
     assert(digit1 == 8);
     assert(digit2 == 3);
     assert(digit3 == 8);
     assert(digit4 == 7);
     assert(digit5 == 5);
     assert(digit6 == 9);
     assert(digit7 == 2);

     std::cout << "bi: " << bi << std::endl
               << "digit0: " << digit0 << std::endl
               << "digit1: " << digit1 << std::endl
               << "digit2: " << digit2 << std::endl
               << "digit3: " << digit3 << std::endl
               << "digit4: " << digit4 << std::endl
	       << "digit5: " << digit5 << std::endl
	       << "digit6: " << digit6 << std::endl
	       << "digit7: " << digit7 << std::endl << std::endl;
    }
    {
     // Setup 8--------------------------------------------------
     bigint bi("1234567890");

     // Test
     int digit0 = bi[0];
     int digit1 = bi[1];
     int digit2 = bi[2];
     int digit3 = bi[3];
     int digit4 = bi[4];
     int digit5 = bi[5];
     int digit6 = bi[6];
     int digit7 = bi[7];
     int digit8 = bi[8];
     int digit9 = bi[9];

     // Verify
     assert(bi == "1234567890");
     assert(digit0 == 0);
     assert(digit1 == 9);
     assert(digit2 == 8);
     assert(digit3 == 7);
     assert(digit4 == 6);
     assert(digit5 == 5);
     assert(digit6 == 4);
     assert(digit7 == 3);
     assert(digit8 == 2);
     assert(digit9 == 1);

     std::cout << "bi: " << bi << std::endl
               << "digit0: " << digit0 << std::endl
               << "digit1: " << digit1 << std::endl
               << "digit2: " << digit2 << std::endl
               << "digit3: " << digit3 << std::endl
               << "digit4: " << digit4 << std::endl
               << "digit5: " << digit5 << std::endl
               << "digit6: " << digit6 << std::endl
               << "digit7: " << digit7 << std::endl
	       << "digit8: " << digit8 << std::endl
	       << "digit9: " << digit9 << std::endl << std::endl;
    }
    {
     // Setup 9-------------------------------------------------
     bigint bi("9876543210987654321");

     // Test
     int digit0 = bi[0];
     int digit1 = bi[1];
     int digit2 = bi[2];
     int digit3 = bi[3];
     int digit4 = bi[4];
     int digit5 = bi[5];
     int digit6 = bi[6];
     int digit7 = bi[7];
     int digit8 = bi[8];
     int digit9 = bi[9];
     int digit10 = bi[10];
     int digit11 = bi[11];
     int digit12 = bi[12];
     int digit13 = bi[13];
     int digit14 = bi[14];
     int digit15 = bi[15];
     int digit16 = bi[16];
     int digit17 = bi[17];
     int digit18 = bi[18];

     // Verify
     assert(bi == "9876543210987654321");
     assert(digit0 == 1);
     assert(digit1 == 2);
     assert(digit2 == 3);
     assert(digit3 == 4);
     assert(digit4 == 5);
     assert(digit5 == 6);
     assert(digit6 == 7);
     assert(digit7 == 8);
     assert(digit8 == 9);
     assert(digit9 == 0);
     assert(digit10 == 1);
     assert(digit11 == 2);
     assert(digit12 == 3);
     assert(digit13 == 4);
     assert(digit14 == 5);
     assert(digit15 == 6);
     assert(digit16 == 7);
     assert(digit17 == 8);
     assert(digit18 == 9);

     std::cout << "bi: " << bi << std::endl
               << "digit0: " << digit0 << std::endl
               << "digit1: " << digit1 << std::endl
               << "digit2: " << digit2 << std::endl
               << "digit3: " << digit3 << std::endl
               << "digit4: " << digit4 << std::endl
               << "digit5: " << digit5 << std::endl
               << "digit6: " << digit6 << std::endl
               << "digit7: " << digit7 << std::endl
               << "digit8: " << digit8 << std::endl
               << "digit9: " << digit9 << std::endl
	       << "digit10: " << digit10 << std::endl
	       << "digit11: " << digit11 << std::endl
	       << "digit12: " << digit12 << std::endl
	       << "digit13: " << digit13 << std::endl
	       << "digit14: " << digit14 << std::endl
	       << "digit15: " << digit15 << std::endl
	       << "digit16: " << digit16 << std::endl
	       << "digit17: " << digit17 << std::endl
	       << "digit18: " << digit18 << std::endl << std::endl;
    }
    {
     // Setup 10------------------------------------------------
     bigint bi("88888888888888888888888888888888888888888");
     std::cout << "bi: " << bi << std::endl;

     // Test
     int biDigit[41];
     for(int i = 0; i < 41; i++) {
         biDigit[i] = bi[i];
     }

     // Verify
     assert(bi == "88888888888888888888888888888888888888888");
     for(int i = 0; i < 41; i++) {
         assert(biDigit[i] == 8);
     }

    std::cout << "digit0-digit40: " << 8 << std::endl << std::endl;
    }


    std::cout << "Done testing subscript." << std::endl;
}
