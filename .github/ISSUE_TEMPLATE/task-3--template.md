---
name: 'Task 3: Reuse `isdigit()` from the C standard library'
about: Task 3 for Students
title: 'Task 3: Reuse `isdigit()` from the C standard library'
labels: enhancement
assignees: ''

---

Implement the code for this task in the `clibIsdigit()` function.
This function performs the same algorithm as the previous task,
it takes a `char` as input, tests if it is the set
('0', '1', '2', '3', '4', '5', '6', '7', '8', '9'), and returns
`true` if it is a digit character in that set, and `false` if
it is not a digit character.

But for this version, you are required to reuse the `isdigit()` function
from the C standard library.  You will need to include the appropriate
header, and invoke the function and get and return its result.


You need to perform the following steps:

1. Make sure you `#include` the library you need in order to reuse the
   `isdigit()` function from it.
2. Call the `isdigit()` library function on the character to be tested, passing it
   the parameter you received in your function.
3. Return the result that the `isdigit()` returns as the boolean result for your
   `clibIsdigit()` function.  Technically the `isdigit()` function from the
   library returns an `int` value.  But it returns 1 if the character was
   a digit, to indicate `true`, and 0 to indicate `false`.  Originally C did not
   have an actual `bool` type.  But 0 / 1 will get automatically converted
   (or type cast) into boolean `false` / `true`.  So you can just return whatever
   the call to `isdigit()` returns and it will be converted to the correct
   `bool` type.

**Suggested Solution**


**Additional Requirements**

- You are required to reuse the C standard library `isdigit()` function in
  the implementation of this task.
- You are required to pass in the needed parameter to the function, and get
  the return result to return as the result from the function you are
  writing here.
