#include <stdio.h>
#include <stdlib.h>
#include "random_filling.h"

void print_array_integers(int *array, int nmemb) {
    // TODO
    for(int i = 0; i < nmemb; i++) {
        printf("%d, ", array[i]); //*(array + i)
    }
    printf("\n");
   

}

void insertion_sort(int *array, int nmemb) {
    // TODO
    // More info on: https://en.wikipedia.org/wiki/Insertion_sort
}

int search_brute_force(int busco, int *array, int nmemb, int *numb_itero) {
    // TODO
    for(int i = 0; i < nmemb; i++) { 
        (*numb_itero)++; // increment a value at a pointer
        if (array[i] == busco) {
        
            return i;
        }

        // printf("itteration: %d\n", *numb_itero);
       
    }
    return -1;



}

int search_dichotomic_iterative(int busco, int *array, int ind_min, int ind_max,
        int *numb_itero) {
    // TODO
    // More info on: https://en.wikipedia.org/wiki/Dichotomic_search
}

void search(int number, int *array, int nmemb) {
    int pos, iter = 0;

    printf("We want to look for a number %d\n", number);
    pos = search_brute_force(number, array, nmemb, &iter);

    printf("With Brute Force:\n");
    if (pos < 0) {
        printf("No Found. Number of iterations %d\n", iter);
    } else {
        printf("Found in index %d. Number of iterations %d\n", pos, iter);
    }

    /*
     iter = 0;
     pos = search_dichotomic_iterative(number, array, 0, nmemb - 1, &iter);

     printf("With Dichotomic Search:\n");
     if (pos < 0) {
     printf("No Found. Number of iterations %d\n", iter);
     } else {
     printf("Found in index %d. Number of iterations %d\n", pos, iter);
     }
     */
}

int main() {
    int miarray[SIZE];

    printf("Filling\n");
    random_filling(miarray, SIZE, 1, SIZE * SIZE);
    print_array_integers(miarray, SIZE);

    /*
     insertion_sort(miarray, SIZE);
     printf("After Sorting\n");
     print_array_integers(miarray, SIZE);
     */

    search(890, miarray, SIZE);
    search(173, miarray, SIZE);


    int p = 10;
    int *p_p = &p;

    *p_p = *p_p + 1;

    printf("will it work? %d\n", *p_p);
    return 0;

    
}

// gcc insertionSortandSearch.c random_filling.c -DSIZE=10


