#include <stdio.h>
#include <string.h>

#define MIN 40

void question_8();


int main() {

    // Question 5
    // char user_input[MIN];

    // printf("Enter something less than 40 characters: ");
    // scanf("%s", user_input);

    // printf("You entered: %s\n", user_input);


    // // instead we want an integer
    // int numbers;
    // printf("Enter a numbers: ");
    // scanf("%d", &numbers); // note the need of an address

    // printf("You entered: %d\n", numbers);

    // dont recommend scanf 


    // Question 2
    // for(;;) {

    //     printf("Enter a character: ");
    //     char buffer[100];
    //     char user;

    //     fgets(buffer, 100, stdin); // instead, read a string of chars from the user

    //     user = buffer[0];

    //     if(user == 'q') {
    //         break;
    //     } else if (user == 'A' || user == 'B' || user == 'C') {
    //         printf("%d\n", user); // since internally a char is a number
    //     } else {
    //         printf("%c\n", user);
    //     }

    // }


    question_8();


    return 0;
}


void question_8() {

    // Question 8 - a simple calculator
    int selection;
    printf("Press 1: Addition, Press 2: Subtraction, Press 3: Multiplication, Press 4: Division, Press 5: Exit:  ");
    scanf("%d", &selection);

    if(selection == 1 || selection == 2 || selection == 3 || selection == 4) {

        // ask the user to press a number
        int numbers[2];
        float result;
        for(int i = 0; i < 2; i++) {
            printf("Enter a number: ");
            scanf("%d", &numbers[i]); // use fgets always
        }

        // now do the operation
        if (selection == 1) {
            // add them
            result = numbers[0] + numbers[1];

        } else if (selection == 2) {
            result = numbers[0] - numbers[1];

        } else if (selection == 3) {
            result = numbers[0] * numbers[1];

        } else {
            // ensure no division by 0
            if (numbers[1] == 0) {
                return;
            } 


            result = (float) numbers[0] / numbers[1]; // ensure that we don't loose accuracy
        }

        // only showing 2 decimals
    
        printf("Result: %.2f\n", result);


    } else {
        return;
    }


    return;
}

