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
        bi = bi.times10(0);

        // Verify
        assert(bi == 3);

	std::cout << "3 * 10^0 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture 2
        bigint bi(296);

        // Test
        bi = bi.times10(1);

        // Verify
        assert(bi == 2960);

        std::cout << "296 * 10^1 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture 3
        bigint bi(98000);

        // Test
        bi = bi.times10(3);

        // Verify
        assert(bi == 98000000);

        std::cout << "98000 * 10^3 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture 4
        bigint bi("1000256");

        // Test
        bi = bi.times10(4);

        // Verify
        assert(bi == "10002560000");

        std::cout << "1000256 * 10^4 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture 5
        bigint bi("2803871001");

        // Test
        bi = bi.times10(0);

        // Verify
        assert(bi == "2803871001");

        std::cout << "2803871001 * 10^0 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture 6
        bigint bi("123456789012");

        // Test
        bi = bi.times10(8);

        // Verify
        assert(bi == "12345678901200000000");

        std::cout << "123456789012 * 10^8 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture 7
        bigint bi("92376491872734687618829173648872");

        // Test
        bi = bi.times10(15);

        // Verify
        assert(bi == "92376491872734687618829173648872000000000000000");

        std::cout << "92376491872734687618829173648872 * 10^15 = " << bi
		  << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture 8
        bigint bi(1);

        // Test
        bi = bi.times10(50);

        // Verify
        assert(bi == "100000000000000000000000000000000000000000000000000");

        std::cout << "1 * 10^50 = " << bi << std::endl << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture 9
        bigint bi("1234567890098765432100");

        // Test
        bi = bi.times10(22);

        // Verify
        assert(bi == "12345678900987654321000000000000000000000000");

        std::cout << "1234567890098765432100 * 10^22 = " << bi << std::endl
		  << std::endl;
    }
    {
        //------------------------------------------------------
        // Setup fixture 10
        bigint bi("1000000000009999999998888888888877777777666666665555555");

        // Test
        bi = bi.times10(40);

        // Verify
        assert(bi == "10000000000099999999988888888888777777776666666655555550000000000000000000000000000000000000000");

        std::cout << "1000000000009999999998888888888877777777666666665555555* 10^40 = "
		  << std::endl << bi << std::endl << std::endl;
    }

    std::cout << "Done testing times_10" << std::endl;
}
