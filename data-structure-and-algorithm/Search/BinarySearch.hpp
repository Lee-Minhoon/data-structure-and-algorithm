#ifndef BINARYSERACH_H
#define BINARYSERACH_H

template <typename T>
int BinarySearch(T arr[], int len, T target)
{
    int start = 0;
    int end = len - 1;
    int mid = (start + end) / 2;

    while (end - start >= 0) {
        if (target == arr[mid]) {
            return mid;
        }
        else if (target >= arr[mid]) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }

    return -1;
}

#endif