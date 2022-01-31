# POINTER
- Pointer is address variable
- It can store the address of data
- Pointer are used for accessing heap memory
- 5 Arithmetic operations are allowed pointer
- p++ - move pointer to next element
- p - - move pointer to previous element
- p+k gives address of kth element form pointer location to right
- p-k gives address of kth element from pointer location to left
- q-p gives number of elements between 2 pointers p and q
- Pointers can be of many levels
- Double pointer is used for accessing 2D arrays

## Why Pointer

![App Screenshot](https://i.ibb.co/b53YLwZ/whypointer.png)

- To Access heap memory
- Code cannot access heap memory 
- Pointer indirectaly access heap memory, 
- To access file in pc, internet, printer, keybord etc.

## Features of Pointers

- Pointers save memory space.
- Execution time with pointers is faster because data are manipulated with the address, that is, direct access to
  memory location.
- Memory is accessed efficiently with the pointers. The pointer assigns and releases the memory as well. Hence it can be said the Memory of pointers is dynamically allocated.
- Pointers are used with data structures. They are useful for representing two-dimensional and multi-dimensional
arrays.
- An array, of any type can be accessed with the help of pointers, without considering its subscript range.
- Pointers are used for file handling.
- Pointers are used to allocate memory dynamically.
- In C++, a pointer declared to a base class could access the object of a derived class. However, a pointer to a derived class cannot access the object of a base class.

## Reference
- Reference is a Alias of variable
- It must be initialised when declared
- It doesn’t take any memory
- It cannot be modified to refer other variable
- Syntax for reference declaration is 
- Int &y=x;

-- When a variable is declared as a reference, it becomes an alternative name for an existing variable. A variable can be declared as a reference by putting ‘&’ in the declaration

#include<iostream>
using namespace std;

int main()
{
int x = 10;

// ref is a reference to x.
int& ref = x;

// Value of x is now changed to 20
ref = 20;
cout << "x = " << x << endl ;

// Value of x is now changed to 30
x = 30;
cout << "ref = " << ref << endl ;

return 0;
}













