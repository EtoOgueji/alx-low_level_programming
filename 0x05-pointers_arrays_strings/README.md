# README
This README provides a brief overview of three fundamental concepts in the C programming language: Pointers, Arrays, and Strings.

## Pointers
Pointers are variables that store memory addresses. They allow you to manipulate and access data indirectly by pointing to the memory locations where the data is stored. Pointers are a powerful feature of C and provide efficient ways to work with memory and data structures.

### Key Points:

A pointer variable holds the memory address of another variable.
The & operator is used to obtain the address of a variable.
The * operator is used to declare a pointer variable and to access the value at the memory address it points to.
Pointers are commonly used for dynamic memory allocation, passing arguments to functions by reference, and working with arrays and strings efficiently.

## Arrays
An array is a collection of elements of the same data type that are stored in contiguous memory locations. It provides a convenient way to store and access multiple values using a single identifier. Arrays in C are zero-indexed, meaning the first element is accessed using index 0.

### Key Points:

Arrays have a fixed size and hold elements of the same data type.
Elements in an array can be accessed using their index.
The size of an array is determined at compile time.
Array names act as constant pointers to the first element of the array.
Arrays can be passed to functions, enabling operations on array elements.

## Strings
In C, a string is an array of characters terminated by a null character ('\0'). Strings are commonly used to represent and manipulate textual data. Although C does not have a built-in string type, strings are handled using character arrays and library functions.

### Key Points:

Strings in C are represented as character arrays.
Strings are terminated by a null character ('\0'), which marks the end of the string.
String literals are enclosed in double quotation marks (").
String manipulation functions, such as strlen, strcpy, and strcat, are available in the C standard library.
C supports various operations on strings, including concatenation, comparison, and extraction of substrings.
