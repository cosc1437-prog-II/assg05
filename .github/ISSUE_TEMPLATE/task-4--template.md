---
name: 'Task 4: User Defined Absolute Value Function'
about: Task 4 for Students
title: 'Task 4: User Defined Absolute Value Function'
labels: enhancement
assignees: ''

---

For the first time, you have not been given the function signature
and prototype for the function for this task.  You will need
to declare a signature for a function named `myabs()` and put it
into the header file, and also declare the function body 
and put it into the implementation file.

This function takes a `double` parameter as input, and it is a
value returning function that returns a `double` result.
The function should return the absolute value of any value
given to it, so for example if given `-5` it returns `5`,
but given `5` it just returns back `5` again.  The absolute
value of a negative number is the negation (negative) of that
number, but the absolute value of a positive number is just
that number.


You need to perform the following steps:

1. You first need to add in the correct signature described into the
   `assg05-library.hpp` header file.  Don't forget the ending `;`
2. And you need to add in a declaration of the function in the
   `assg05-library.cpp` implementation file.  You should start with
   a stub function that returns `0.0`, and ensure it compiles and that
   if you enable the `task4` tests, the tests run (but fail).
3. Hopefully the implementation is relatively obvious to you at this point in the course.
   You need a selection statement that tests if the input value parameter is 
   negative (e.g. less than 0).  If the input parameter is negative, you want to 
   negate, or alternatively return the negation of the value.
4. If the value was positive (or 0) you don't have to do anything, just return the
   original value.
5. You will need 1 or possible 2 separate return statements to return the
   absolute value you calculate, depending on how you write your implementation.

**Suggested Solution**


**Additional Requirements**

- You are required to correctly define the signature of the function and place it in the
  `assg05-library.hpp` header file.
- You are required to correctly declare the implementation of the function
  and place it in the `assg05-library.cpp` file.  You are required to make sure that
  this declaration is immediately below the documentation given for the
  `myabs()` function.
- You are required to use an appropriate selection control statement to test if the
  value that is input is negative, and negate it if it is to calculate the
  absolute value.

