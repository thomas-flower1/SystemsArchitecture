#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "error - too many arguments\n");
        return 1;
    }

    int max = atoi(argv[0]); // just default the first as the max for now

    for(int i = 1; i < argc; i++) {
        int current_int = atoi(argv[i]);
        if (current_int > max) {
            max = current_int;
        }
    }

    printf("Max: %d\n", max);

    return 0;
}