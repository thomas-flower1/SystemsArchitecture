#include <stdio.h>
#include <stdbool.h>

int sum(int x, int y); // prototype, forward declaration

#define TRUE 0;

int main(){
    
    printf("%d\n", sum(10, 11));

    // printf takes a undefined amount of arguments
    // printf is a variadic function
    // uses ... to declare


    // man and the function name in the terminal will give the documentation of a function - not part of the course to make a variadic function

    // operators
    // same as python

    // c does not have booleans, false = 0, true anything that is not 0
    printf("%d\n", 10 < 20);

    bool x = true; // can do this if we import from the standard library

    // we can also do bitwise operations
    // bit manipulation is not used much


    // assignment


    // ternary operator
    int age = 18;
    int can_vote = (age >= 18) ? 1 : 0;

    printf("%d\n", can_vote);

    // size of - returns the number of bytes
    // useful when we are learning memory management - when declaring how much memory


    // reference and the dereference operator
    int *p_int = &age;
    printf("%d\n", *p_int);


    // control flow
    // at the lower level, if statements is evaluated to a number not a bool

    // scanf is a blocking function, waits for user input before continuing


    // the stack is for local variables
    // int arr[5] - we have variable called array which is stored in the stack, this variable points at the first memory address in the array
    // much alike other languages, 0 indexed, should note that this arrray only goes up to 4th index


    // another way of defining an array is by assigning the values straight away
    int arr[] = { 25, 68, 349, 324, 34}; // dont need to define how big the array is
    
    // arrays are static, we cannot change it once it is defined
    // we will do dynamic memory in a few weeks

    // length of an array - divide the sizeof an array by the size of the type
    int size = sizeof(arr) / sizeof(int);

    // an empty array is initialized to garbage values

    // forbidden to assign an array to another array
    // can be solved by using memory copy function - function in the slides

    // Strings
    // there are no strings in c
    // rather we have an array of characters
    // the terminating character - \0 - or just 0 settting the bits
    char greetings[] = "Hello world"; // note the use of double quotes here

    // there is one other way, which is less common
    char *p_greetings = "Hello world"; // this is part of read only data, also hae the terminating character

    // the array method is preffered - 80 characters max


    // comparing two strings, need a function, there is a list of the most common methods for strings in the slides
    // int strcmp() -- returns a 0 if they are equal which is a bit weird
    // have a look in own time
    // forbidden to delcare and initialize on different lines in c
    // if we want to do this we need to strcpy
    // the size of strings function also includes the null terminating character, so be careful
    // there is a function though for size of strings in c










    


    return 0;
}

int sum(int x, int y) {
    return x + y;
}