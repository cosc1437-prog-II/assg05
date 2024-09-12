---
name: 'Task 5: User Defined Fahrenheit to Celsius Function'
about: Task 5 for Students
title: 'Task 5: User Defined Fahrenheit to Celsius Function'
labels: enhancement
assignees: ''

---

You again need to add the signature and a stub
implementation of the `fahrenheitToCelsius()` function before
enabling the `task5` tests and beginning work.

This function takes a `double` parameter as input, and it is
a value returning function that returns a `double` result.
The input parameter is a temperature in degrees
Fahrenheit.  The function should convert to temperature
in degrees Celsius, and return the converted temperature.



You need to perform the following steps:

1. You first need to add in the correct signature described into the
   `assg05-library.hpp` header file.  Don't forget the ending `;`
2. And you need to add in a declaration of the function in the
   `assg05-library.cpp` implementation file.  You should start with
   a stub function that returns `0.0`, and ensure it compiles and that
   if you enable the `task4` tests, the tests run (but fail).
3. Use a local variable named something like `degreesCelsius`.  This should
   be of type `double`.  You will store the result of the calculation in
   this variable and return it.
4. Perform the arithmetic operations to convert the input parameter in
   degrees Fahrenheit to degrees Celsius.  Save the result in your local
   variable.
5. Add or modify your stub return statement to return the calculated
   temperature in degrees Celsius.

**Suggested Solution**


**Additional Requirements**

- You are required to correctly define the signature of the function and place it in the
  `assg05-library.hpp` header file.
- You are required to correctly declare the implementation of the function
  and place it in the `assg05-library.cpp` file.  You are required to make sure that
  this declaration is immediately below the documentation given for the
  `myabs()` function.
- You should use a local variable as described to hold the result of the
  arithmetic calculation and then return it.

