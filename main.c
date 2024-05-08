#include <stdio.h>

void findMinMax(int* array, int size, int* max, int* min) {
    *max = *min = array[0]; // Initialize max and min with the first element of the array
    for (int i = 1; i < size; i++) {
        if (array[i] > *max) {
            *max = array[i]; // Update max if a larger value is found
        }
        if (array[i] < *min) {
            *min = array[i]; // Update min if a smaller value is found
        }
    }
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
