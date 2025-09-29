#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
#define SIZE 100

// TO DO DECLARATIONS

struct fecha
{
    int dia;
    int mes;
    int anio;
};

void fill_fechas(struct fecha fechas[])
{
    for (int i = 0; i < MAX; i++)
    {
        fechas[i].dia = rand() % 31 + 1;
        fechas[i].mes = rand() % 12 + 1;
        fechas[i].anio = rand() % 100 + 2000;
    }
}

void display_fechas(struct fecha fechas[])
{
    // given an array of dates we want to print them
    int array_size = sizeof(fechas) / sizeof(fechas[0]); // divide the length of the whole array by the size of the data types
    for (int i = 0; i < array_size; i++)
    {
        printf("Day: %d Month: %d Year: %d", fechas[i].dia, fechas[i].mes, fechas[i].anio);
    }
}


int is_leap(int y)
{
    // if the year is evenly divisible by 4 then we can return true - 1
    // if the year is not evenly divisible by 4 we can return false - 0
    if(y % 4 == 0) {
        return 1;
    }

    return 0;
}



void display_invalid_fechas(struct fecha fechas[])
{
    // TO DO
}




// QUESTION 3
struct point_data
{
    int coord_x;
    int coord_y;
};


struct polygon
{
    char description[SIZE];
    struct point_data points[SIZE];
};


// Question 4
// NIF: eight digits followed by a character.
// CIF: character followed by 8 digits.
// Passport: eight characters/digits.
// NIE: character followed by 7 digits and a second character.
// String of up to 16 characters

struct NIF {
    int numbers[8];
    char character;
};

struct CIF {
    char character;
    int numbers[8];
};

struct NIE {
    char f_character;
    int digits[7];
    char s_character;
};

union identification {
    struct NIF nif;
    struct CIF cif;
    char passport[9];
    struct NIE;
    char string[16]; // this is the size of the union - the size of the biggest member in the union
    

};



int main()
{


    // QUESTION 3
    // Set the rectangle variable with points: (0,1), (4,1), (4,4), (0, 4)

    struct polygon rectangle;
    
    // create the first point
    struct point_data point1;
    point1.coord_x = 0;
    point1.coord_y = 1;

    // create the second point
    struct point_data point2;
    point2.coord_x = 4;
    point2.coord_y = 1;

    // create the third point
    struct point_data point3;
    point3.coord_x = 4;
    point3.coord_y = 4;

    // create the last point
    struct point_data point4;
    point4.coord_x = 0;
    point4.coord_y = 4;



    // then add to the array
    rectangle.points[0] = point1;
    rectangle.points[1] = point2;
    rectangle.points[2] = point3;
    rectangle.points[3] = point4;

    // alternatively, can do this, oops
    rectangle.points[0].coord_x = 0;
    rectangle.points[0].coord_y = 1;

    // we can also initialize like this
    struct point_data point = {4, 4};

    // we can also do it with
    rectangle.points[10] = (struct point_data) {5, 5};


    // TODO set the description to rectangle

    char name[] = "Rectangle";
    strcpy(rectangle.description, name); // copy rectangle to the rectangle description

    printf("%s \n", rectangle.description);


    // Question 4
    union identification user1 ;
    user1.nif = (struct NIF ){1458, 'T'};
    strcpy(user1.passport, "2384HF");


    // Question 5
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int len ;

    // strcpy(str1, "Goodbye"); reassign a string

    //  copy str1 into str3, print str3
    strcpy(str3, str1); // destination and source
    printf("%s\n", str3);

    // concatenates str1 and str2, print the result of the concatenation
    strcat(str1, str2); // destination and source
    printf("%s\n", str1);


    // total length of str1 after concatenation, print total length 
    len = strlen(str1);
    printf("%d \n", (int) len);

    // test 
    // char string[] = "Hello";
    // int size = sizeof(string);
    // printf("%d\n", size); // includes the null terminating character



    return 0;
}