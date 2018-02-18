// bigint Test Program
//
// Tests:  times_10, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture 1
        bigint bi(3);

        // Test
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);

	std::cout << "3 * 1 = " << bi << std::endl << std::endl;
    }
    {
     	//------------------------------------------------------
        // Setup fixture 2
        bigint bi(38);

        // Test
        bi = bi.timesDigit(5);

        // Verify
        assert(bi == 190);

	std::cout << "38 * 5 = " << bi << std::endl << std::endl;
    }
    {
     	//------------------------------------------------------
        // Setup fixture 3
        bigint bi(2038);

        // Test
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == 18342);

	std::cout << "2038 * 9 = " << bi << std::endl << std::endl;
    }
    {
     	//------------------------------------------------------
        // Setup fixture 4
        bigint bi(4038287);

        // Test
        bi = bi.timesDigit(4);

        // Verify
        assert(bi == 16153148);

	std::cout << "4038287 * 4 = " << bi << std::endl << std::endl;
    }
    {
     	//------------------------------------------------------
        // Setup fixture 5
        bigint bi(123456789);

        // Test
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == 1111111101);

	std::cout << "123456789 * 9 = " << bi << std::endl << std::endl;
    }
    {
     	//------------------------------------------------------
        // Setup fixture 6
        bigint bi("9999999999");

        // Test
        bi = bi.timesDigit(6);

        // Verify
        assert(bi == "59999999994");

	std::cout << "59999999994 * 6 = " << bi << std::endl << std::endl;
    }
    {
     	//------------------------------------------------------
        // Setup fixture 7
        bigint bi("1234567890123456789");

        // Test
        bi = bi.timesDigit(3);

        // Verify
        assert(bi == "3703703670370370367");

	std::cout << "1234567890123456789 * 3 = " << bi << std::endl
		  << std::endl;
    }
    {
     	//------------------------------------------------------
        // Setup fixture 8
        bigint bi(92389);

        // Test
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == 0);

	std::cout << "92389 * 0 = " << bi << std::endl << std::endl;
    }
    {
     	//------------------------------------------------------
        // Setup fixture 9
        bigint bi("987654321123456789");

        // Test
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == "987654321123456789");

	std::cout << "987654321123456789 * 1 = " << bi << std::endl
		  << std::endl;
    }
    {
     	//------------------------------------------------------
        // Setup fixture 10
        bigint bi("99999999999999999999999999999999999999");

        // Test
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == "899999999999999999999999999999999999991");

	std::cout << "99999999999999999999999999999999999999 * 9 = "
 		  << std::endl << bi << std::endl << std::endl;
    }
    {
     	//------------------------------------------------------
        // Setup fixture 11
        bigint bi;

        // Test
        bi = bi.timesDigit(9);

        // Verify
        assert(bi == 0);

	std::cout << "0 * 9 = " << bi << std::endl << std::endl;
    }
    {
     	//------------------------------------------------------
        // Setup fixture 12
        bigint bi("918236548912834618236472364");

        // Test
        bi = bi.timesDigit(8);

        // Verify
        assert(bi == "7345892391302676945891778912");

	std::cout << "918236548912834618236472364 * 8 = " << std::endl
		  << bi << std::endl <<std::endl;
    }


    std::cout << "Done testing bigint * digit" << std::endl;
}
