int i = 4;
compiler => date type = int , variable name = i and data = 4

pointers => variable which stores the memory address of a variable

& (Address) operator
=> ampersand & gets the address of a variable
=> format specifier %p

- (value at address) operator
  => \* operator is called value at address operator.
  => This operator is used to get the value from a particular address.

Pointer to a Pointer
=> A pointer to a pointer is a type of pointer that stores the address of another pointer,
allowing indirect access to the value of the variable the first pointer points to.

Call by value

1. Value Copy: Passes argument's copy, not the original.
2. Separate Memory: Parameters use distinct memory locations.
3. Data Safety: Original data remains unchanged by the function.
4. Direct Modification: Cannot modify original arguments directly.
5. Efficiency: Good for small data types, less so for large structures.
6. Ease of Use: Straightforward and safe for functions not alter

Call by Reference

1. Direct Access: Call by reference passes the address of variables, allowing functions to modify the
   actual values.
2. Pointers in C: Implemented using pointers that point to the original data.
3. Efficiency: Avoids copying large data structures, saving memory and time.
4. Multiple Returns: Can return multiple values from a function via out-parameters.
5. Risk: Increases the potential for unintended side effects if not used carefully.
