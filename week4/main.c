#include <stdio.h>
#include <stdlib.h>


#define STRING_SIZE 100

int main(){

    char name[STRING_SIZE];
    int age;
    
    // getting input from the use
    // printf("What is your name?\n");
    // scanf("%s", name);  // this is blocking

    // // however if we use a different type we would need to pass by address, 
    // printf("What is your age?\n");
    // scanf("%d", &age);

    // // how lets print what we have
    // printf("Your name is %s and your age is %d \n", name, age);

    // // another way of getting characters
    // printf("Enter a single character: ");
    // char ch = getchar();
    // printf("Character: %c", ch);


    // // another way of getting strings but not recommended
    // // char str[STRING_SIZE];
    // // printf("Enter a string: ");
    // // gets(str);
    
    // // puts(str);

    // // a better way of reading the strings
    // char str[STRING_SIZE];

    // printf("Enter a string: ");
    // fgets(str, STRING_SIZE, stdin);

    // printf("You typed: %s", str);


    // // using a loop to get input
    // char user_input[STRING_SIZE]; // used to hold the whole string
    // for(;;) {

    //     printf("Press q to quit: ");
    //     fgets(user_input, STRING_SIZE, stdin); // this reads the whole string from the standard input
    //     char first_char = user_input[0];

    //     if (first_char == 'q') {
    //         break;
    //     }
    // }

    // Part 4: Files

    // writing to files
    FILE *wf = fopen("test.txt", "w"); // open the file in read mode and assign to a pointer, note that write means that the file is overwritten

    if (wf == NULL) {
        exit(1); // exit the program
    }

    // else we can just write to the file
    char message[] = "I am writing into a file\n";
    char another_message[] = "This is a different message\n";

    fputs(message, wf);
    fputs(another_message, wf);
    fclose(wf);

    // now reading to files
    FILE *rf = fopen("test.txt", "r"); // open the file in read mode

    if (rf == NULL) {
        exit(1);
    }

    char current_line[STRING_SIZE];
    while(fgets(current_line, STRING_SIZE, rf)) {
        // for each line, lets just read and display it onto the terminal
        puts(current_line);
    }

    fclose(rf);



    return 0;


}