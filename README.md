# ACM Learn - CP Lab Compre

## Hello Everyone!

This session will be a speedrun, covering all topics and everything you need to ace your CP lab exam!

## For the beginners

It's important to have a clear idea of how logic works in C.

The main aim of this session is to help you learn how to convert your logic into executable code.

For reference, check out the ACM foundations docs [here!](https://foundations.acmbpdc.org/Beginner-1/)

It's a pretty chill exam, no worries!

## And so the grind begins

We will be covering $7$ important topics:

1. Basic Input/Output

2. Simple arithmetic, ASCII

3. Matrices

4. Functions

5. String Operations

6. Pointers

7. Structures

A small note: We will be using mostly _ inbuilt c header files:

```c
#include <stdio.h> // Standard I/O functions, never forget to include this 
#include <stdlib.h> // Standard library functions like malloc, atoi, etc.
#include <string.h> // Used for string operations
#include <math.h> // Used for math functions and constants like pi, sqrt()
```

## Basic Input/Output

In this section we learn about the ways of taking inputs for different data types.

Here is the need to know:

| Format Specifier | Data type |
| ---------------- | --------- |
| %d or %i         | int       |
| %c               | char      |
| %f               | float     |
| %lf              | double    |
| %s               | string    |

Also, there are multiple ways of reading input:

1. Taking user input

2. Reading from a file

3. Taking command line arguments

##### Question 1:

Write a program that takes input as student id (int), student name (string), student discipline (string), student marks (float) and student grade (char).



## Simple Arithmetic and ASCII

In this section we practice some problems based on arithmetic operations in C.

###### Question 1:

Write a program that takes input as marks of a student for $6$ courses, and prints average marks.

###### Question 2:

Write a program that reads two numbers, and multiplies then if operator is entered as $*$, divides them if operator is entered as $/$ 

###### Question 3:

Write a program that prints the sum of digits of a number.

###### Question 4:

Write a program that checks if a number is an amrstrong number, i.e., the sum of the cube of it's digits is equal to the number itself.

###### Question 5:

Write a program that calculates the volume of a sphere, taking radius of sphere as user input.

###### Question 6:

Write a program that reads a character and converts it into lowercase.

## Matrices

###### Question 1:

Write a program to add two matrices.

###### Question 2:

Write a program to multiply two matrices.

## Functions

###### Question 1:

Write a function that returns the sum of digits.

###### Question 2:

Write a program that takes input as marks of a student for $n$ courses, and prints maximum marks. Value of $n$ is taken from user.



## String operations

| String function    | Description                                                                                                                                                                 |
| ------------------ | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| strcpy(dest, src)  | Copies the content of source string to destination string.                                                                                                                  |
| strcmp(str1, str2) | Compares 2 strings on the basis of their ascii value.<br/>Returns an integer < 0 if str1 < str2.<br/>Returns an integer > 0 if str 1 > str2.<br/>Returns 0 if str1 == str2. |
| strlen(str)        | Retuns the length of the string.                                                                                                                                            |
| strcat(str1, str2) | Concatenates two strings str1 and str2, and the resultant is stored in str1.                                                                                                |

Note: to use these functions you have to include the header file string.h

```c
#include <string.h>
```

Know that strings in C end with a "\0"" character indicating the end of string.

So always allocate with extra space for it.

For example, if you believe you string length will be 4, initialize it as:

```c
char string[5]; // indices 0 to 3 (inclusive) for string, index 4 for \0  
```

## Pointers

In this section we wil be pointing towards our screen and think what is happening... 

Just kidding! Turns out, pointers are pretty easy once you understand how they work.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = NULL; // After this session, it won't be null anymore.
}
```

###### Question 1:

Write a function to swap two values

###### Question 2:

Write a program to read and display your id number and cgpa.

## Structures

In this section, we discuss the use of structures to group related data, and help in better organization of the same.

###### Question 1:

Write a program to read student details and print using structures.

###### Question 2:

Write a program to read student details and print using structures, with the help of a read_value function wherein all values input of a student will be read.

###### Question 3:

Write a program to  read book details and author details. Example data is given below:

**Books:** 

| BookID | BookName                                          | AuthorID | PublishDate |
| ------ | ------------------------------------------------- | -------- | ----------- |
| 100    | Harry Potter: The Philosophers Stone              | 200      | 1997-06-26  |
| 101    | The Lord of the Rings: The Fellowship of the Ring | 201      | 1954-07-29  |
| 102    | Percy Jackson: The Lightning Thief                | 202      | 2005-06-28  |
| 103    | Harry Potter: The Goblet of Fire                  | 200      | 2000-07-08  |
| 104    | Percy Jackson: The Last Olympian                  | 202      | 2009-05-05  |
| 105    | On the Origin of Species                          | 203      | 1859-11-24  |

**Authors:**

| AuthorID | AuthorName     |
| -------- | -------------- |
| 200      | J.K. Rowling   |
| 201      | J.R.R. Tolkien |
| 202      | Rick Riordan   |
| 203      | Charles Darwin |

a) Display all Books written by J.K Rowling

b) Display the author name of the book 'On the Origin of Species' 

c) Display book details and author name of books published before the year 2000












