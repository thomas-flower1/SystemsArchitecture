#include <stdio.h>
#define SIZE 4

void double_array(int array[], int size){
    for (int i = 0; i < size; i++)
    {
        array[i] *= 2;
    }
}

typedef struct {
    char *name;
    int age;

} Person;

int main(int argc, char *argv[]){
     // pointers in c
    int fav_number = 10;
    int *p_fav_number = &fav_number;

    printf("The value of my favorite number is: %d\n", *p_fav_number);
    printf("The address of my fav number is: %p\n", p_fav_number);

    int array[SIZE] = {25, 50, 75, 100};
    double_array(array, SIZE);
    printf("%d\n", array[0]);

    Person p1 = {"Steve", 32};
    Person *p_p1 = &p1;

    printf("%s\n", p1.name);
    printf("%s\n", p_p1->name);


    // double pointers
    int num = 1;
    int *p_num = &num;
    int **pp_num = &p_num; // a int pointer pointing at another pointer

    printf("Pass by value: %d\n", num);
    printf("Pass by reference: %d\n", *p_num);
    printf("Pass by double reference: %d\n", **pp_num);


    // command line arguments
    if (argc > 1) {
        for(int i = 0; i < argc; i++) {
            printf("%s\n", argv[i]);
        }
    }





    return 0;
}