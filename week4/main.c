#include <stdio.h>


#define STRING_SIZE 100

int main(){

    char name[STRING_SIZE];
    int age;
    
    // getting input from the use
    printf("What is your name?\n");
    scanf("%s", name);  // this is blocking

    // however if we use a different type we would need to pass by address, 
    printf("What is your age?\n");
    scanf("%d", &age);

    // how lets print what we have
    printf("Your name is %s and your age is %d \n", name, age);

    // another way of getting characters
    printf("Enter a single character: ");
    char ch = getchar();
    printf("Character: %c", ch);


    // another way of getting strings but not recommended
    // char str[STRING_SIZE];
    // printf("Enter a string: ");
    // gets(str);
    
    // puts(str);

    // a better way of reading the strings
    char str[STRING_SIZE];

    printf("Enter a string: ");
    fgets(str, STRING_SIZE, stdin);

    printf("You typed: %s", str);

    // getting a character input and also making sure that we can clear the buffer for any unexpected output
    





    return 0;


}