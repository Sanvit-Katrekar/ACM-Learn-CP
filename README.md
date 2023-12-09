# ACM Learn - CP Lab Compre

## Hello Everyone!

This session will be a speedrun, covering all topics and everything you need to ace your CP lab exam!

## For the beginners

It's important to have a clear idea of how logic works in C.

The main aim of this session is to help you learn how to convert your logic into executable code.

For reference, check out the ACM foundations docs [here!](https://foundations.acmbpdc.org/Beginner-1/)

It's a pretty chill exam, no worries!

## And so the grind begins

We will be covering $8$ important topics:

1. Basic Input/Output

2. Simple arithmetic, ASCII

3. Matrices

4. Functions

5. String Operations

6. Pointers

7. Structures

8. Recursion

We will be using these inbuilt c header files:

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

[Answer: basic.c](basic-io/basic.c)
[Answer using gets(): basic_gets.c](basic-io/basic_gets.c)
[Answer using cmd line arguments](basic-io/cmdline.c)

## Simple Arithmetic and ASCII

In this section we practice some problems based on arithmetic operations in C.

###### Question 1:

Write a program that takes input as marks of a student for $6$ courses, and prints average marks.

[Answer: avg.c](arithmetic/avg.c)

###### Question 2:

Write a program that reads two numbers, and multiplies then if operator is entered as $*$, divides them if operator is entered as $/$ 

[Answer: mul_div.c](arithmetic/mul_div.c)

###### Question 3:

Write a program that prints the sum of digits of a number.

[Answer: digits_sum.c](arithmetic/digits_sum.c)

###### Question 4:

Write a program that checks if a number is an amrstrong number, i.e., the sum of the cube of it's digits is equal to the number itself.

[Answer: armstrong.c](arithmetic/armstrong.c)

###### Question 5:

Write a program that calculates the volume of a sphere, taking radius of sphere as user input.

[Answer: sphere_volume.c](arithmetic/sphere_volume.c)

###### Question 6:

Write a program that reads a character and converts it into lowercase.

[Answer: upper_to_lower.c](arithmetic/upper_to_lower.c)

## Matrices

###### Question 1:

Write a program to add two matrices.

[Answer: add.c](matrices/add.c)

###### Question 2:

Write a program to multiply two matrices.

[Answer: mul.c](matrices/mul.c)

## Functions

###### Question 1:

Write a function that returns the sum of digits.

[Answer: sum_digits.c](functions/sum_digits.c)

###### Question 2:

Write a program that takes input as marks of a student for $n$ courses, and prints maximum marks. Value of $n$ is taken from user.

[Answer: max_marks.c](functions/max_marks.c)

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

Here are all the string functions: [all_funcs.c](strings/all_funcs.c)

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

[Answer: swap.c](pointers/swap.c)

###### Question 2:

Write a program to read and display your id number and cgpa.

[Answer: student.c](pointers/student.c)

## Structures

In this section, we discuss the use of structures to group related data, and help in better organization of the same.

###### Question 1:

Write a program to read student details and print using structures.

[Answer: student.c](structures/student.c)

###### Question 2:

Write a program to read student details and print using structures, with the help of a read_value function wherein all values input of a student will be read.

[Answer: student_ptr.c](structures/student_ptr.c)

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

[Answer: books_authors.c](structures/books_authors.c)

## Recursion

Recursion is like a funhouse mirror, creating a seemingly endless loop of self-referential code.

It's a powerful technique that allows functions to call themselves, leading to a series of nested steps that solve complex problems in an elegant way.

In this section we discuss a recursive approach to solving problems.

###### Question 1:

Write a program to calculate the power of a number $x^n$

[Answer: power.c](recursion/power.c)

###### Question 2:

Write a program to calculate the nth term of fibnocci term.

[Answer: fib.c](recursion/fib.c)

###### Question 3:

Write a program to calculate $n * (n-2) * (n-4) * ...\  2$ if $n$ is even, or $n * (n-2) * (n-4) * ...\ 1$ if $n$ is odd.

[Answer: final.c](recursion/final.c)
