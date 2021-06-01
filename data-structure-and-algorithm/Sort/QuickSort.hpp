#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "../header.h"

template <typename T>
void QuickSort(T arr[], int start, int end)
{
    if (end <= start) return;

    T pivot = arr[start];
    int i = start, j = end;
    while (i < j) {
        while (pivot >= arr[i] && i < end) {
            i++;
        }
        while (pivot <= arr[j] && j > start) {
            j--;
        }
        if (i < j) {
            Swap(arr, i, j);
        }
    }
    Swap(arr, start, j);

    QuickSort(arr, start, j - 1);
    QuickSort(arr, j + 1, end);
}

#endif