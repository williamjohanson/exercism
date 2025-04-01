#include "binary_search.h"
#include <stdbool.h>

const int *binary_search(int value, const int *arr, size_t length) {
    if (length == 0 || value < arr[0] || value > arr[length - 1]) {
        return NULL;
    }

    if (length == 1) {
        return &arr[0];
    }

    int bottom_index = 0;
    int top_index = length - 1;

    while (bottom_index <= top_index) {
        int pointer = bottom_index + (top_index - bottom_index) / 2;

        if (arr[pointer] == value) {
            return &arr[pointer];  
        } else if (arr[pointer] > value) {
            top_index = pointer - 1;
        } else {
            bottom_index = pointer + 1;
        }
    }

    return NULL;  
}