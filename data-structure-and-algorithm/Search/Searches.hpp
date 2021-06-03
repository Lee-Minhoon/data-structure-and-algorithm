#ifndef SEARCHES_H
#define SEARCHES_H

#include "../header.h"

// ¼±Çü Å½»ö(Linear Search)
template <typename T>
int LinearSearch(T arr[], int len, T target)
{
    for (int i = 0; i < len; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
}

// ÀÌºÐ Å½»ö(Binary Search)
template <typename T>
int BinarySearch(T arr[], int len, T target)
{
    int start = 0;
    int end = len - 1;

    while (end >= start) {
        int mid = (start + end) / 2;
        if (target > arr[mid]) {
            start = mid + 1;
        }
        else if (target < arr[mid]) {
            end = mid - 1;
        }
        else {
            return mid;
        }
    }

    return -1;
}

#endif