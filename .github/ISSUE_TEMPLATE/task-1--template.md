---
name: 'Task 1: Volume of Football revisited'
about: Task 1 for Students
title: 'Task 1: Volume of Football revisited'
labels: enhancement, good first issue
assignees: ''

---

**Description**

(Re)implement the function to calculate the volume of a football
given the short and long axis radius.  In this version you are required
to reuse functions and constants from the `cmath` C standard library to perform
the calculations.


You need to do the following steps:

1. First add in the needed `#include` statement at the top of the
   `assg05-library.cpp` file, so that you can reuse the functions and
   constants defined in that C standard library in your code.
2. As before, you should create a local variable named `volume` of type
   `double` used to hold the calculation of the volume and return it from
   this function.
3. Perform the calculation to calculate the volume.
   - You are required to use the `pow()` function from the `cmath` library to
     calculate the square of the `shortAxis` in this implementation.
   - You are required to use the `M_PI` constant declared in the `cmath` library
     for the value of $\pi$ (instead of declaring your own constant for $\pi$).
4. After reading this weeks materials and tutorials, you should better understand
   the purpose of the `return` statement.  This and all of the functions in this
   assignment are value returning functions.  So you need to return the 
   correctly calculated `volume` of the football as the last step in this function.

**Suggested Solution**

**Additional Requirements**

- You are required to reuse the `pow()` function to raise the short axis to
  a power of 2 in your implementation.
- You are required to use the constant `M_PI` from the `cmath` library
  in your expression where it needs a value for $\pi$

