#include "random_filling.h"

void random_filling(int *array, int size, int max, int min) {
    int i;

    for (i = 0; i < size; i++) {
        array[i] = (int) (min + (((float) rand()) / RAND_MAX * (max - min)));
    }

}
