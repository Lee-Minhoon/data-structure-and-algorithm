#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include "../header.h"

template <typename T>
void SelectionSort(T arr[], int len)
{
    for (int i = 0; i < len; i++) {
        int temp = i;
        for (int j = i + 1; j < len; j++) {
            if (arr[temp] >= arr[j]) {
                temp = j;
            }
        }
        Swap(arr, i, temp);
    }
}

#endif