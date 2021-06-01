#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include "../header.h"

template <typename T>
void BubbleSort(T arr[], int len)
{
    for (int i = 0; i < len - 1; i++) {
        for (int j = 1; j < len - i; j++) {
            if (arr[j] < arr[j - 1]) {
                Swap(arr, j, j - 1);
            }
        }
    }
}

#endif