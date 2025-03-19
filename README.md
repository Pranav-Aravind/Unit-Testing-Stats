# Unit Testing Stats

## Overview

This project involves testing the `average` and `maximum` functions using unit tests. The tests ensure that the functions work correctly under various scenarios, with full coverage through test suites. The tests focus on edge cases and provide detailed assertions to check correctness.

## Test Suites

Each function, **average** and **maximum**, has its own suite, with 6 test cases and 14 assertions.

### Test Cases:

#### 1. Empty Array
- **Assertions**:
  - The function returns `0` if the array is empty.

#### 2. Single Element Array
- **Assertions**:
  - One assertion for an array with a positive double number.
  - One assertion for an array with a negative double number.

#### 3. Array with All Same Elements
- **Assertions**:
  - One assertion for a positive double number.
  - One assertion for a negative double number.
  - One assertion for zero.

#### 4. Array with Some Duplicate Elements
- **Assertions**:
  - One assertion for an array where two elements are the same (e.g., zero).
  - One assertion for an array with three identical negative double numbers.

#### 5. Array with All Different Elements
- **Assertions**:
  - Two assertions for arrays with different positive, negative, and zero numbers.
  - One assertion for an array with only negative double numbers.

#### 6. Incorrect Test Values
- **Assertions**:
  - One assertion checks if a value rounded off to a different decimal point (e.g., `5.845` rounded to `5.485`) still passes as correct.
  - One assertion checks that a random value passes as the correct average.
  - In the **maximum** function, an assertion checks if a value that is not the maximum passes as the maximum.

## Function Details

- **Data Types**: All variables used for both functions are of the type `double` and the functions return a `double` number.
- **Assertions**: The `assert_double_equal` function is used to verify that the values returned by the functions are accurate to the last decimal point.

### Key Points:
- The **average** value is calculated within the test function itself.
- The functions return `0` when given an empty array, preventing errors, and assertions check for this zero return.
- The functions take `size` as an argument, ensuring compatibility with arrays of any size.
- The functions handle all types of double numbers (positive, negative, and zero), including duplicate elements.

## Conclusion

Both the **average** and **maximum** functions have been thoroughly tested and verified to work correctly for all edge cases, ensuring their accuracy and reliability.
