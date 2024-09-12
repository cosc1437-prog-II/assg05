/** @file assg05-library.cpp
 *
 * @brief Implementation file for Assignment 05: Predefined and user defined functions
 *
 * @author Derek Harter
 * @note   class: COSC 1437, Fall 2024
 * @note   ide  : VS Code 1.92.2
 * @note   assg : Assignment 05: Predefined and user defined functions
 * @date   September 01, 2024
 *
 * Assignment implementation file.  All of the actual implementation of
 * functions for tasks goes into an implementation file with a .cpp extension.
 * The prototypes of any functions that are used by others should be put into
 * the .hpp header file.
 */
#include <cmath>
#include <cctype>

using namespace std;

/** @brief Calculate volume of football
 *
 * Calculate and return the volume of a football (technically a
 * oblate spheroid). We are given the short axis (a) and the long
 * axis (b) of the football.  Volume of such a oblate spheroid is calculated
 * using the formula:
 *
 *     volume = 4/3 pi a^2 b
 *
 * NOTE: this is a repeat of a previous assignment function, but here you
 * are required to use the <cmath> library funciton `pow()` and the
 * defined pi constant from that library to do your calculation here.
 *
 * @param shortAxis A double value which is 1/2 the length of the short axis of the
 *    football (e.g. the radius of the short axis) we want to calculate the area of.
 * @param longAxis A double value which is 1/2 the length of the long axis.
 *
 * @returns double The area of the football for given a and b inputs is
 *    calculated and returned as the result from this function.
 */
double volumeOfFootball(double shortAxis, double longAxis)
{
  // your code for task 1 goes here
  return 0.0;
}


/** @brief My function to determine if is a digit
 *
 * For task 2 we will first write our own version of
 * an isdigit() test.  This test takes a single character
 * and returns true if it is a digit 0,1,2,3,4,5,6,7,8,9
 * or false if not.  You should use an if or case statement
 * as your control statement to implement this.
 *
 * @param charToTest A single character to be tested if it is
 *    is a digit or not.
 *
 * @returns bool Returns true if the character to tests is
      a digit, 0-9, and false if it is not a digit.
 */
bool myIsdigit(char charToTest)
{
  // your code for task 2 goes here
  return true;
}


/** @brief clib function to determine if is a digit
 *
 * For task 3 you then need to write a second function that
 * uses the isdigit() function from the `cctype` 
 * library instead of writing your own implementation.
 *
 * @param charToTest A single character to be tested if it is
 *    is a digit or not.
 *
 * @returns bool Returns true if the character to tests is
      a digit, 0-9, and false if it is not a digit.
 */
bool clibIsdigit(char charToTest)
{
  // your code for task 3 goes here
  return true;
}


/** @brief absolute value of integer
 *
 * Given an integer value, calculate and return
 * the absolute value of the given value.  e.g.
 * if the value is negative, should return the postiive
 * corresponding magnitude, but if already positive we
 * just return the value given.
 *
 * @param value A signed integer that will have its 
 *    absolute value calculated and returned by this function.
 *
 * @returns Returns the absolute value of the input value
 *    parameter.  Which is the positive magnitude of the
 *    input value if it was negative, or just the original
 *    value if it was originally positive.
 */
// your code for task 4 goes here
// don't forget, you need to define the signature in the header
// file, as well as the code body implementation here

/** @brief convert fahrenheit to celsius
 *
 * Given a temperature in degrees fahrenheit,
 * calculate and return the corresponding
 * temperature as degress celsius.
 *
 * @param degreesFahrenheit  The temperature in degrees
 *    fahrenheit to be converted.
 *
 * @returns Returns the corresponding temperature
 *    in degrees celsius.
 */
// your code for task 5 goes here
// don't forget, you need to define the signature in the header
// file, as well as the code body implementation here


/** @brief convert  celsius to fahrenheit
 *
 * Given a temperature in degrees celsius,
 * calculate and return the corresponding
 * temperature as degress fahrenheit.
 *
 * @param degreesCelsius  The temperature in degrees
 *    celsius to be converted.
 *
 * @returns Returns the corresponding temperature
 *    in degrees fahrenheit.
 */
// your code for extra credit task 6 goes here
// don't forget, you need to define the signature in the header
// file, as well as the code body implementation here
