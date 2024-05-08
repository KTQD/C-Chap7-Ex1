#include <stdio.h>

void findMinMax(int* array, int size, int* max, int* min) {
   
}

int main() {
    int data[] = {53, 32, 19, 79, 25, 5, 47};
    int size = sizeof(data) / sizeof(data[0]);
    int max, min;

    findMinMax(data, size, &max, &min);
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    return 0;
}
