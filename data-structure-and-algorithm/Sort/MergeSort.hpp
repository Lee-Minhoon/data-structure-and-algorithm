#ifndef MERGESORT_H
#define MERGESORT_H

#include "../header.h"

template <typename T>
void Merge(T arr[], int start, int end, int mid)
{
    const int SIZE = end - start + 1;
    T* temp = new T[SIZE];
    int i = start, j = mid + 1, idx = 0;

    while (i <= mid && j <= end) {
        if (arr[i] < arr[j]) {
            temp[idx] = arr[i++];
            idx++;
        }
        else if (arr[j] < arr[i]) {
            temp[idx] = arr[j++];
            idx++;
        }
    }

    while (i <= mid) {
        temp[idx] = arr[i++];
        idx++;
    }
    while (j <= end) {
        temp[idx] = arr[j++];
        idx++;
    }

    idx = 0;
    for (int k = start; k <= end; k++) {
        arr[k] = temp[idx++];
    }

}

template <typename T>
void MergeSort(T arr[], int start, int end)
{
    if (start < end) {
        int mid = (start + end) / 2;
        MergeSort(arr, start, mid);
        MergeSort(arr, mid + 1, end);
        Merge(arr, start, end, mid);
    }
}

#endif