/** @file assg05-tests.cpp
 *
 * @brief Unit tests for Assignment 05: Predefined and user defined functions
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @note   assg : Assignment 05: Predefined and user defined functions
 * @date   September 012, 2024
 *
 * Assignment unit tests.  This file contains tests of the work you do
 * for the individual tasks for the assignment.  You should perform the
 * tasks in order, from Task 1 through the last task.  To start a task,
 * change the `#undef` statement to `#define`.  This will enable the test
 * cases for that task.
 */
#include "assg05-library.hpp"
#include "catch.hpp"
using namespace std;

// change these to #define when ready to begin working on each task,
// once defined they will enable the tests declared below for each task
#undef task1
#undef task2
#undef task3
#undef task4
#undef task5
#undef task6

/** volumeOfFootball() test cases
 * Write your code in the volumeOfFootball() function to pass
 * the following tests as described in the assignment description.
 */
#ifdef task1
TEST_CASE("Task 1 <volumeOfFootball()> tests", "[task1]")
{
  // any football where either the short or long axis is of length
  // 0.0 has an area of 0.0
  // 1, 2 and 3 are all primes
  CHECK_THAT(volumeOfFootball(0.0, 0.0), Catch::WithinAbs(0.0, 0.00001));
  CHECK_THAT(volumeOfFootball(0.0, 1.0), Catch::WithinAbs(0.0, 0.00001));
  CHECK_THAT(volumeOfFootball(5.0, 0.0), Catch::WithinAbs(0.0, 0.00001));

  // test half a dozen different footballs of different short and long axis
  // radius to make sure your calculation is working
  CHECK_THAT(volumeOfFootball(1.0, 1.0), Catch::WithinAbs(4.1887902047863905, 0.00001));
  CHECK_THAT(volumeOfFootball(2.0, 1.0), Catch::WithinAbs(16.755160819145562, 0.00001));
  CHECK_THAT(volumeOfFootball(5.0, 1.0), Catch::WithinAbs(104.71975511965977, 0.00001));
  CHECK_THAT(volumeOfFootball(1.0, 2.0), Catch::WithinAbs(8.377580409572781, 0.00001));
  CHECK_THAT(volumeOfFootball(1.0, 5.0), Catch::WithinAbs(20.94395102393195, 0.00001));
  CHECK_THAT(volumeOfFootball(4.25, 3.87), Catch::WithinAbs(292.8042892962027, 0.00001));
}
#endif


/** myIsdigit() test cases
 * Write your code in the myIsdigit() function to pass
 * the following tests as described in the assignment description.
 */
#ifdef task2
TEST_CASE("Task 2 <myIsdigit()> tests", "[task2]")
{
  // test all 10 of the digits that your implementation returns the expected
  // result of true
  CHECK(myIsdigit('0'));
  CHECK(myIsdigit('1'));
  CHECK(myIsdigit('2'));
  CHECK(myIsdigit('3'));
  CHECK(myIsdigit('4'));
  CHECK(myIsdigit('5'));
  CHECK(myIsdigit('6'));
  CHECK(myIsdigit('7'));
  CHECK(myIsdigit('8'));
  CHECK(myIsdigit('9'));

  // now check correctly returning false for some non digits
  CHECK_FALSE(myIsdigit('a'));
  CHECK_FALSE(myIsdigit('q'));
  CHECK_FALSE(myIsdigit('z'));
  CHECK_FALSE(myIsdigit('A'));
  CHECK_FALSE(myIsdigit('Q'));
  CHECK_FALSE(myIsdigit('Z'));
  CHECK_FALSE(myIsdigit('.'));
  CHECK_FALSE(myIsdigit('*'));
  CHECK_FALSE(myIsdigit(' '));
  CHECK_FALSE(myIsdigit('-'));
  CHECK_FALSE(myIsdigit('?'));
}
#endif

/** myIsdigit() test cases
 * Write your code in the myIsdigit() function to pass
 * the following tests as described in the assignment description.
 */
#ifdef task3
TEST_CASE("Task 3 <clibIsdigit()> tests", "[task3]")
{
  // test all 10 of the digits that your implementation that should use the
  // c library function returns the expected result of true
  CHECK(clibIsdigit('0'));
  CHECK(clibIsdigit('1'));
  CHECK(clibIsdigit('2'));
  CHECK(clibIsdigit('3'));
  CHECK(clibIsdigit('4'));
  CHECK(clibIsdigit('5'));
  CHECK(clibIsdigit('6'));
  CHECK(clibIsdigit('7'));
  CHECK(clibIsdigit('8'));
  CHECK(clibIsdigit('9'));

  // now check correctly returning false for some non digits
  CHECK_FALSE(clibIsdigit('a'));
  CHECK_FALSE(clibIsdigit('q'));
  CHECK_FALSE(clibIsdigit('z'));
  CHECK_FALSE(clibIsdigit('A'));
  CHECK_FALSE(clibIsdigit('Q'));
  CHECK_FALSE(clibIsdigit('Z'));
  CHECK_FALSE(clibIsdigit('.'));
  CHECK_FALSE(clibIsdigit('*'));
  CHECK_FALSE(clibIsdigit(' '));
  CHECK_FALSE(clibIsdigit('-'));
  CHECK_FALSE(clibIsdigit('?'));
}
#endif


/** myabs() test cases
 * You have to actuall declare the `myabs()` function and prototype
 * this time, and then implement it to pass these tests.
 */
#ifdef task4
TEST_CASE("Task 4 <myabs()> tests", "[task4]")
{
  CHECK(myabs(5) == 5);
  CHECK(myabs(-5) == 5);
  CHECK(myabs(0) == 0);
  CHECK(myabs(3) == 3);
  CHECK(myabs(-3) == 3);
  CHECK(myabs(12345) == 12345);
  CHECK(myabs(-12345) == 12345);
  CHECK(myabs(34398347) == 34398347);
  CHECK(myabs(-34398347) == 34398347);
}
#endif


/** fahrenheitToCelsius() test cases
 * Test declaration and implementation of function
 * to convert from temperature in fahrenheit to
 * temperature in celsius
 */
#ifdef task5
TEST_CASE("Task 5 <fahrenheitToCelsius()> tests", "[task5]")
{
  CHECK_THAT(fahrenheitToCelsius(32.0), Catch::WithinAbs(0.0, 0.00001));
  CHECK_THAT(fahrenheitToCelsius(212.0), Catch::WithinAbs(100.0, 0.00001));
  CHECK_THAT(fahrenheitToCelsius(68.0), Catch::WithinAbs(20.0, 0.00001));
  CHECK_THAT(fahrenheitToCelsius(0.0), Catch::WithinAbs(-17.7777778, 0.00001));
  CHECK_THAT(fahrenheitToCelsius(100.0), Catch::WithinAbs(37.7777778, 0.00001));
  CHECK_THAT(fahrenheitToCelsius(42.0), Catch::WithinAbs(5.55555556, 0.00001));
  CHECK_THAT(fahrenheitToCelsius(107.6), Catch::WithinAbs(42.0, 0.00001));
}
#endif


/** celsiusToFahrenheit() test cases
 * For extra credit, implement the inverse function
 * to convert celsius to fahrenheit.
 */
#ifdef task6
TEST_CASE("Task 6 <celsiusToFahrenheit()> tests", "[task6]")
{
  CHECK_THAT(celsiusToFahrenheit(0.0), Catch::WithinAbs(32.0, 0.00001));
  CHECK_THAT(celsiusToFahrenheit(100.0), Catch::WithinAbs(212.0, 0.00001));
  CHECK_THAT(celsiusToFahrenheit(20.0), Catch::WithinAbs(68.0, 0.00001));
  CHECK_THAT(celsiusToFahrenheit(-17.7777778), Catch::WithinAbs(0.0, 0.00001));
  CHECK_THAT(celsiusToFahrenheit(37.7777778), Catch::WithinAbs(100.0, 0.00001));
  CHECK_THAT(celsiusToFahrenheit(5.55555556), Catch::WithinAbs(42.0, 0.00001));
  CHECK_THAT(celsiusToFahrenheit(42.0), Catch::WithinAbs(107.6, 0.00001));

  // do the inverse, did you know you can call a function and send its return
  // value to another function, liek we do here to check these are the
  // inverse of one another
  CHECK_THAT(fahrenheitToCelsius(celsiusToFahrenheit(0.0)), Catch::WithinAbs(0.0, 0.00001));
  CHECK_THAT(fahrenheitToCelsius(celsiusToFahrenheit(100.0)), Catch::WithinAbs(100.0, 0.00001));
  CHECK_THAT(fahrenheitToCelsius(celsiusToFahrenheit(42.0)), Catch::WithinAbs(42.0, 0.00001));
}
#endif
