#include "../header.h"

#ifndef BINARYSERACH_H
#define BINARYSERACH_H

template <typename T>
bool BinarySearch(T arr[], int len, T findNum)
{
    int start = 0;
    int end = len - 1;
    int mid = (start + end) / 2;

    while (end - start >= 0) {
        if (findNum == arr[mid]) {
            return true;
        }
        else if (findNum < arr[mid]) {
            end = mid - 1;
            mid = (start + end) / 2;
        }
        else {
            start = mid + 1;
            mid = (start + end) / 2;
        }
    }

    return false;
}

#endif