#include <stdio.h>


/*
Lecture Introduction - 15/09/25
*/

#define MAX 5; // a way of declaring a const



enum days
{
    Monday,
    Tuesday,
    Wednesday,

};

// global scope
int z = 10;

// not good practice to have global variables, prefer local variables instead

int main()
{
    //  general purpose programming language

    // apps and systems

    // high level programming language
    // very manual memory management - some can argue that it is kind of a middle level

    // c programs are compiled
    // using gcc to turn the code into binary for the cpu
    // compile time - what is done when the program is compiled
    // also have run time

    // interpreted languages
    // examples are python and javascript - just in time compilation, compiled when you run it

    // imperative, make a program based on a statement, procedural or object oriented
    // c is procedural, since there are no objects or classes

    // type system
    // c is static and weakly typed, static means the type is known at compile time
    // weakly typed languages allow for types to be coverted

    // int value; // declaring a type

    // Lecture demo
    printf("Hello world \n");

    // the build process
    // won't be asked about this in the exam

    // -Wall, display all the warnings, for example can see an unused variable, use this during the compilation, our code will be compiled with this to see any errors
    // a warning doesn't prevent an executable from being created,

    // basic types
    // char* strings = "hello world";

    // format specifiers
    int a = 10;

    printf("%d \n", a);

    // sizeof operator
    int size = sizeof(a);
    printf("%d", size);

    // enums

    // typedefs -- create an alias, a difference name
    typedef int decimal;
    decimal num = 10;

    int number = 11;

    // type conversions

    // explicit type casting
    int sum = 10;
    double new_sum = (double)sum;

    // type promotion

    // variables
    int test;  // declaration
    test = 11; // assignment

    int b = 100; // initialization

    // shadowing - when the same variable names are used at different layers of the scope

    // example
    int e = 11;

    // coding conventions for c
    // there is a style guide in the labs
    // snake case is commonly used for c - most popular, just use one style
    // format shortcut for linux os ctrl shift i



    return 0; // exit code -- 0 success
}