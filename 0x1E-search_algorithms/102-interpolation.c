#include "search_algos.h"
#include <stdio.h>

int interpolation_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;  // Return -1 for invalid input
    }

    int low = 0;
    int high = size - 1;

    while (low <= high && value >= array[low] && value <= array[high]) {
        // Calculate the probe position using interpolation formula
        size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        if (array[pos] == value) {
            // Check if this is the first occurrence of the value
            while (pos > 0 && array[pos - 1] == value) {
                pos--;
            }
            return pos;  // Value found
        } else if (array[pos] < value) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }

    return -1;  // Value not found
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    size_t size = sizeof(array) / sizeof(array[0]);
    int value = 6;
    int result = interpolation_search(array, size, value);

    if (result != -1) {
        printf("Value %d found at index %d\n", value, result);
    } else {
        printf("Value %d not found in the array\n", value);
    }

    return 0;
}
