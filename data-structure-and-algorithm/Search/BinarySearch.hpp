#ifndef BINARYSERACH_H
#define BINARYSERACH_H

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