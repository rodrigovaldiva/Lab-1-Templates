# Lab-1-Templates
Template Repository for OOPNYUAD Lab 1 for Students to Fill Code
## Exercise 1: Dynamic Array Resizing Exercise

### Aim
The aim of this exercise is to create a C++ program that allows users to dynamically resize an array to a bigger size. This involves creating a temporary array with a larger size, copying the values of the elements from the old array to the new array, and adding new values into the extension cells. The program demonstrates how to work with dynamic arrays and user input.

### Sample Input and Output

Below is a sample interaction with the program, including input and output:

```
Enter the initial size of the array: 3
Enter values for the initial array:
Element 0: 10
Element 1: 20
Element 2: 30
Enter the new size of the array (must be greater than the current size): 5
Element 3: 40
Element 4: 50

Array after resizing to size 5:
Element 0: 10
Element 1: 20
Element 2: 30
Element 3: 40
Element 4: 50
```

### Explanation

1. The program starts by asking the user for the initial size of the array. In this example, the user enters 3.

2. The user is then prompted to enter values for the initial array. In this case, the user enters 10, 20, and 30 as values for the initial elements.

3. Next, the program asks the user for the new size of the array. The user must enter a size greater than the current size, which is 3 in this case. The user enters 5 as the new size.

4. The program dynamically resizes the array to size 5, preserving the original elements (10, 20, 30) and prompting the user to enter new values (40 and 50) for the additional elements.

5. Finally, the program prints the resized array, showing the original and newly added elements, to confirm that the resizing operation was successful.

This exercise helps users understand dynamic memory allocation and resizing arrays based on user input, which is a fundamental concept in C++ programming.

## Exercise 2: Factorial Calculator

### Description
This C++ program calculates the factorial of a non-negative integer using a recursive function. The program defines the factorial of a number `n` according to the following rules:

- `fact(n) = 1` when `n` is 0 or 1.
- `fact(n) = n * fact(n - 1)` when `n` is greater than 1.

The user is prompted to enter a non-negative integer, and the program calculates and displays the factorial of the entered number.


### Sample Input and Output
#### Sample Input:
```
Enter a non-negative integer: 5
```

#### Sample Output:
```
Factorial of 5 is 120
```
