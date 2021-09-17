# CS 3033: Problem Set One (Atoi function)

The **atoi()** function is a standard function in C for converting from a string (null-terminated) to an integer.  This function will return the integer value of the string if the string can be converted to a valid integer or return a zero if the string cannot be converted into a valid integer.  For this first problem set, you are going to create your own implementation of the *atoi()* function. You will write the program on the *boole.cs.uafs.edu server* using a starter project from **GitHub classroom**.

## Starter Project and GitHub Submission and Testing

The starter project will provide the *prog1.c* file that contains your implementation of the atoi() function named **Atoi()**.  You will write the code for your Atoi() function and you can add any other functions as necessary, but you cannot change the code in the main() method or modify any of the other functions.  The main function is setup to test your implementation of the Atoi() function.  You can run some tests locally on the boole server to test.  When you push your repository to GitHub, it will perform some automated tests and score your submission based on whether the tests are passed.  You may push your repository multiple times until the due date to get the best score on the tests.

## Assignment Requirements and Restrictions

The following requirements and restrictions apply to this assignment:

* The only files and library used by your program will be <stdio.h>.
* You cannot use any other C library functions in your program other than printf().  If you need to do something, you need to write the code for it.  If you are not sure if what you are doing is allowed, ask me.
* Document all of your functions with a header block after the first line of the function that provides a brief description of what the function performs, a list of the required arguments and a description, and the return value and description.
* Your code must formatted correctly using indented code blocks and meaningful variable and function names.
* You cannot modify the existing functions other than Atoi().  You can add any additional functions that need to be called by Atoi().
* You cannot change the Atoi() definition.  It must be 
      `int Atoi(char *str);`
