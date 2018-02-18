// bigint Test Program
//
// Tests:  int constructor, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {

     //=====================================================================


     //------------------------------------------------------
     // Setup fixture 1
     bigint left(0);
     bigint right(0);
     bigint result;

     // Test
     result = left + right;

     // Verify
     assert(left   == 0);
     assert(right  == 0);
     assert(result == 0);

     std::cout << "left: " << left << std::endl
	       << "right: " << right << std::endl
	       << "result: " << result << std::endl << std::endl;
    }

    {
      //------------------------------------------------------
      // Setup fixture 2
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);

      std::cout << "left: " << left << std::endl
                << "right: " << right << std::endl
                << "result: " << result << std::endl << std::endl;

    }
    {
      //------------------------------------------------------
      // Setup fixture 3
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);

      std::cout << "left: " << left << std::endl
                << "right: " << right << std::endl
                << "result: " << result << std::endl << std::endl;

    }
    {
     //-------------------------------------------------------
     // Setup fixture 4
     bigint left(123);
     bigint right(56);
     bigint result;

     // Test
     result = left + right;

     // Verify
     assert(left == 123);
     assert(right == 56);
     assert(result == 179);

     std::cout << "left: " << left << std::endl
               << "right: " << right << std::endl
               << "result: " << result << std::endl << std::endl;

    }
    {
     //-------------------------------------------------------
     // Setup fixture 5
     bigint left(65);
     bigint right(321);
     bigint result;

     // Test
     result = left + right;

     // Verify
     assert(left == 65);
     assert(right == 321);
     assert(result == 386);

     std::cout << "left: " << left << std::endl
               << "right: " << right << std::endl
               << "result: " << result << std::endl << std::endl;

    }
    {
     //--------------------------------------------------------
     // Setup fixture 6
     bigint left(9999);
     bigint right(2);
     bigint result;

     // Test
     result = left + right;

     // Verify
     assert(left == 9999);
     assert(right == 2);
     assert(result == 10001);

     std::cout << "left: " << left << std::endl
               << "right: " << right << std::endl
               << "result: " << result << std::endl << std::endl;

    }
    {
     //--------------------------------------------------------
     // Setup fixture 7
     bigint left(2);
     bigint right(999999);
     bigint result;

     // Test
     result = left + right;

     // Verify
     assert(left == 2);
     assert(right == 999999);
     assert(result == 1000001);

     std::cout << "left: " << left << std::endl
               << "right: " << right << std::endl
               << "result: " << result << std::endl << std::endl;

    }
    {
     //--------------------------------------------------------
     // Setup fixture 8
     bigint left(99);
     bigint right(99);
     bigint result;

     // Test
     result = left + right;

     // Verify
     assert(left == 99);
     assert(right == 99);
     assert(result == 198);

     std::cout << "left: " << left << std::endl
               << "right: " << right << std::endl
               << "result: " << result << std::endl << std::endl;

    }
    {
     //--------------------------------------------------------
     // Setup fixture 9
     bigint left("2222");
     bigint right("888888888888888888888888888888888888");
     bigint result;

     // Test
     result = left + right;

     // Verify
     assert(left == "2222");
     assert(right == "888888888888888888888888888888888888");
     assert(result == "888888888888888888888888888888891110");

     std::cout << "left: " << left << std::endl
               << "right: " << right << std::endl
               << "result: " << result << std::endl << std::endl;

    }
    {
     //---------------------------------------------------------
     // Setup fixture 10
     bigint left("777777777777777777777777777777777777777777777");
     bigint right("333333");
     bigint result;

     // Test
     result = left + right;

     // Verify
     assert(left == "777777777777777777777777777777777777777777777");
     assert(right == "333333");
     assert(result == "777777777777777777777777777777777777778111110");

     std::cout << "left: " << left << std::endl
               << "right: " << right << std::endl
               << "result: " << result << std::endl << std::endl;

    }
    {
     //-----------------------------------------------------------
     // Setup fixture 11
     bigint left("111111111111111111111111111111111111111111");
     bigint right("999999999999999999999999999999999999999999");
     bigint result;

     // Test
     result = left + right;

     // Verify
     assert(left == "111111111111111111111111111111111111111111");
     assert(right == "999999999999999999999999999999999999999999");
     assert(result == "1111111111111111111111111111111111111111110");

     std::cout << "left: " << left << std::endl
               << "right: " << right << std::endl
               << "result: " << result << std::endl << std::endl;

    }
    {
     //-----------------------------------------------------------
     // Setup fixture 12
     int right = 83472;
     bigint left("12730193640");
     bigint result;

     // Test
     result = left + right;

     // Verify
     assert(right == 83472);
     assert(left == "12730193640");
     assert(result == "12730277112");

     std::cout << "left: " << left << std::endl
               << "right: " << right << std::endl
               << "result: " << result << std::endl << std::endl;

    }
    {
     //-----------------------------------------------------------
     // Setup fixture 13
     int right = 29834719;
     bigint left("111111111111111111111111111111111111111111");
     bigint result;

     // Test
     result = left + right;

     // Verify
     assert(right == 29834719);
     assert(left == "111111111111111111111111111111111111111111");
     assert(result == "111111111111111111111111111111111140945830");

     std::cout << "left: " << left << std::endl
               << "right: " << right << std::endl
               << "result: " << result << std::endl << std::endl;

    }

    std::cout << "Done with testing addition." << std::endl;
}
